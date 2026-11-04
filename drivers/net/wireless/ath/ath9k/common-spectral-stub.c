#include "ath9k.h"
#include "common-spectral.h"

void ath9k_cmn_spectral_scan_trigger(struct ath_common *common,
                                      struct ath_spec_scan_priv *spec_priv)
{
}
EXPORT_SYMBOL(ath9k_cmn_spectral_scan_trigger);

int ath_cmn_process_fft(struct ath_spec_scan_priv *spec_priv,
                         struct ieee80211_hdr *hdr,
                         struct ath_rx_status *rs, u64 tsf)
{
        return 0;
}
EXPORT_SYMBOL(ath_cmn_process_fft);
