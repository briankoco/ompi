/* -*- C -*-
 * 
 * $HEADER$
 *
 */
#include "ompi_config.h"

#include "mca/pcmclient/pcmclient.h"
#include "include/types.h"

/*
 * Module open / close
 */
int mca_pcmclient_seed_open(void);
int mca_pcmclient_seed_close(void);

/*
 * Startup / Shutdown
 */
struct mca_pcmclient_base_module_1_0_0_t* mca_pcmclient_seed_init(int *priority, bool *allow_multi_user_threads, bool *have_hidden_threads);
int mca_pcmclient_seed_finalize(void);


/*
 * "Action" functions
 */
int mca_pcmclient_seed_get_peers(ompi_process_name_t **peers, size_t *npeers);
ompi_process_name_t* mca_pcmclient_seed_get_self(void);
OMPI_COMP_EXPORT mca_pcmclient_base_component_1_0_0_t mca_pcmclient_seed_component;
