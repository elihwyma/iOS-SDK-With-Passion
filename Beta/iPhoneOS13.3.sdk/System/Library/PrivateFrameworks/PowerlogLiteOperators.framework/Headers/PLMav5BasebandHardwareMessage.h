/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLMav4BasebandHardwareMessage.h>

@interface PLMav5BasebandHardwareMessage : PLMav4BasebandHardwareMessage

{
    struct _PLMav5BasebandHWStatsRPM *_mav5_rpm;
    struct _PLMav5BasebandHWStatsAPPSPerf *_mav5_apps;
    struct _PLMav5BasebandHWStatsSleep *_mav5_apps_sleep;
    struct _PLMav5BasebandHWAPPSSleepVeto *_mav5_apps_sleep_veto;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav5_lpass;
    struct _PLMav5BasebandHWStatsMDSP *_mav5_mdsp;
    struct _PLMav5BasebandHWStatsQDSP *_mav5_qdsp;
    struct _PLMav5BasebandHWStatsSleep *_mav5_mpss_sleep;
    struct _PLMav5BasebandHWMPSSSleepVeto *_mav5_mpss_sleep_veto;
    struct _PLMav5BasebandHWStatsUSB *_mav5_usb;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav5_gps_dpo;
    struct _PLMav5BasebandHWStatsRX *_mav5_rx;
    struct _PLMav5BasebandHWStatsTX *_mav5_tx;
    struct _PLMav5BasebandHWStatsRXSQA *_mav5_rx_sqa;
    struct _PLMav5BasebandHWStatsProtocol *_mav5_protocol;
    struct _PLMav5BasebandHWClocksDuration *_mav5_clock;
    struct _PLMav5BasebandHWStatsSleep *_mav4_mpss_sleep;
    struct _PLMav5BasebandHWMPSSSleepVeto *_mav4_mpss_sleep_veto;
}

@property (nonatomic) struct _PLMav5BasebandHWStatsRX *rx;
@property (nonatomic) struct _PLMav5BasebandHWStatsTX *tx;
@property (nonatomic) struct _PLMav5BasebandHWStatsRXSQA *rx_sqa;
@property (nonatomic) struct _PLMav5BasebandHWStatsProtocol *protocol;
@property (nonatomic) struct _PLMav5BasebandHWClocksDuration *clock;
@property (nonatomic) struct _PLMav5BasebandHWStatsRPM *rpm;
@property (nonatomic) struct _PLMav5BasebandHWStatsAPPSPerf *apps;
@property (nonatomic) struct _PLMav5BasebandHWAPPSSleepVeto *apps_sleep_veto;
@property (nonatomic) struct _PLMav5BasebandHWStatsSleep *apps_sleep;
@property (nonatomic) struct _PLMav5BasebandHWStatsUSB *usb;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *lpass;
@property (nonatomic) struct _PLMav5BasebandHWMPSSSleepVeto *mpss_sleep_veto;
@property (nonatomic) struct _PLMav5BasebandHWStatsSleep *mpss_sleep;
@property (nonatomic) struct _PLMav5BasebandHWStatsMDSP *mdsp;
@property (nonatomic) struct _PLMav5BasebandHWStatsQDSP *qdsp;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *gps_dpo;

- (id)initWithData:(id)arg1;
- (void)parseData:(id)arg1;
- (void)logRPMWithLogger:(id)arg1;
- (void)logLPASSWithLogger:(id)arg1;
- (void)logPeripheralsWithLogger:(id)arg1;
- (void)logClockWithLogger:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (void)logModemAppWithLogger:(id)arg1;
- (void)logRFWithLogger2:(id)arg1;
- (id)indexToRAT:(unsigned long long)arg1;
- (void)logAPPSWithLogger:(id)arg1;
- (void)logProtocolWithLogger:(id)arg1 withCount:(unsigned int)arg2;
- (void)formatDurationandCount:(unsigned int)arg1 withCount:(unsigned int)arg2 inString:(id)arg3;

@end
