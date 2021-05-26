#include <iostream>
#include <vector>
#include <math.h>

#include "ThreadPoolForC.hpp"
#include "workForC.hpp"
#include "Architecture.hpp"
#include "Scheduler.hpp"

int main (int argc, char *argv[]){

  /*
   * Fetch the inputs.
   */
  if (argc < 4){
    std::cerr << "USAGE: " << argv[0] << " TASKS ITERS_PER_TASK THREADS" << std::endl;
    return 1;
  }
  auto tasks = atoi(argv[1]);
  auto iters = atoi(argv[2]);
  auto threads = atoi(argv[3]);

  /*
   * Create the scheduler.
   */
  MARC::ThreadPoolForC pool(threads);
  const MARC::Architecture arch;
  MARC::Scheduler scheduler(pool, arch);


  /*
   * Submit jobs.
   */
  for (auto i=0; i < tasks; i++){
    scheduler.submitAndDetach(myF, (void*)iters, 1, 0);
  }

  return 0;
}