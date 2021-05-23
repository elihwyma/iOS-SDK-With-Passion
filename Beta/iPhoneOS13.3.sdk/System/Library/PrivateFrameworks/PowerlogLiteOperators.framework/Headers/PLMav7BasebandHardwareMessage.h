/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLMav5BasebandHardwareMessage.h>

@class NSMutableString;

@interface PLMav7BasebandHardwareMessage : PLMav5BasebandHardwareMessage

{
    struct _PLMav7BasebandHWStatsRFTech *_rf;
    struct _PLMav7BasebandHWStatsProtocol *_protocol;
    struct _PLMav7BasebandHWStatsMCPMVeto *_mcpm_sleep_veto;
    struct _PLMav7BasebandHWStatsNPAVeto *_npa_sleep_veto;
    struct _PLMav7BasebandHWStatsClockStateMask *_apps_clock_duration_mask;
    struct _PLMav7BasebandHWStatsClockStateMask *_mpss_clock_duration_mask;
    NSMutableString *_apps_clock_duration;
    NSMutableString *_mpss_clock_duration;
    struct _PLMav7BasebandHWStatsClockStateMask *_apps_clock_count_mask;
    struct _PLMav7BasebandHWStatsClockStateMask *_mpss_clock_count_mask;
    struct _PLMav7BasebandHWStatsHSICState *_hsic;
    struct _PLMav7BasebandGPSDPOBin *_gps_dpo_bins;
}

@property (nonatomic) struct _PLMav7BasebandHWStatsRFTech *rf;
@property (nonatomic) struct _PLMav7BasebandHWStatsProtocol *protocol;
@property (nonatomic) struct _PLMav7BasebandHWStatsMCPMVeto *mcpm_sleep_veto;
@property (nonatomic) struct _PLMav7BasebandHWStatsNPAVeto *npa_sleep_veto;
@property (nonatomic) struct _PLMav7BasebandHWStatsClockStateMask *apps_clock_duration_mask;
@property (nonatomic) struct _PLMav7BasebandHWStatsClockStateMask *mpss_clock_duration_mask;
@property (nonatomic) NSMutableString *apps_clock_duration;
@property (nonatomic) NSMutableString *mpss_clock_duration;
@property (nonatomic) struct _PLMav7BasebandHWStatsClockStateMask *apps_clock_count_mask;
@property (nonatomic) struct _PLMav7BasebandHWStatsClockStateMask *mpss_clock_count_mask;
@property (nonatomic) struct _PLMav7BasebandHWStatsHSICState *hsic;
@property (nonatomic) struct _PLMav7BasebandGPSDPOBin *gps_dpo_bins;

- (id)initWithData:(id)arg1;
- (void)parseData:(id)arg1;
- (int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask *)arg1;
- (void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask *)arg1 oftype:(int)arg2 withData:(char *)arg3;
- (void)logPeripheralsWithLogger:(id)arg1;
- (void)logProtocolActiveWithLogger:(id)arg1;
- (void)logSleepVetoWithLogger:(id)arg1;
- (void)logClockWithLogger:(id)arg1;
- (void)logHSICWithLogger:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (void)logRFWithLogger2:(id)arg1;
- (id)indexToRAT:(unsigned long long)arg1;
- (void)logAPPSWithLogger:(id)arg1;
- (void)logMPSSWithLogger:(id)arg1;

@end
