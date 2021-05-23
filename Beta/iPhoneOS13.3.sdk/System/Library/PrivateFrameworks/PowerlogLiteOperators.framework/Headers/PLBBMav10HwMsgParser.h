/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLMav7BasebandHardwareMessage.h>

@interface PLBBMav10HwMsgParser : PLMav7BasebandHardwareMessage

{
    CDStruct_162c5519 *_rfLTE;
    CDStruct_db2d74ec *_rfWCDMA;
    CDStruct_1addce7e *_rfGSM;
    CDStruct_11910088 *_rfTDS;
    CDStruct_9b497bd6 *_rf1x;
    CDStruct_ba477c7b *_rfHDR;
    CDStruct_1bdbe9b9 *_rfOOS;
    CDStruct_7658c0cd *_rpmNew;
    CDStruct_d008d4b8 *_apps_sleepNew;
    CDStruct_d008d4b8 *_mpss_sleepNew;
    CDStruct_8c9fbaa1 *_appsNew;
    CDStruct_4cf7c1f9 *_qdspNew;
    CDStruct_713664b0 *_mcpm_sleep_vetoNew;
}

@property (nonatomic) CDStruct_162c5519 *rfLTE;
@property (nonatomic) CDStruct_db2d74ec *rfWCDMA;
@property (nonatomic) CDStruct_1addce7e *rfGSM;
@property (nonatomic) CDStruct_11910088 *rfTDS;
@property (nonatomic) CDStruct_9b497bd6 *rf1x;
@property (nonatomic) CDStruct_ba477c7b *rfHDR;
@property (nonatomic) CDStruct_1bdbe9b9 *rfOOS;
@property (nonatomic) CDStruct_7658c0cd *rpmNew;
@property (nonatomic) CDStruct_d008d4b8 *apps_sleepNew;
@property (nonatomic) CDStruct_d008d4b8 *mpss_sleepNew;
@property (nonatomic) CDStruct_8c9fbaa1 *appsNew;
@property (nonatomic) CDStruct_4cf7c1f9 *qdspNew;
@property (nonatomic) CDStruct_713664b0 *mcpm_sleep_vetoNew;

- (id)initWithData:(id)arg1;
- (void)parseData:(id)arg1;
- (int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask *)arg1;
- (void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask *)arg1 oftype:(int)arg2 withData:(char *)arg3;
- (void)logRPMWithLogger:(id)arg1;
- (void)logSleepVetoWithLogger:(id)arg1;
- (void)logHwRFGSMWithLogger:(id)arg1;
- (void)logHwRFTDSWithLogger:(id)arg1;
- (void)logHwRF1xWithLogger:(id)arg1;
- (void)logHwRFHDRWithLogger:(id)arg1;
- (void)logHwRFOOSWithLogger:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (void)logAPPSWithLogger:(id)arg1;
- (void)logMPSSWithLogger:(id)arg1;
- (void)logHwRFLTEWithLogger:(id)arg1;
- (void)logHwRFWCDMAWithLogger:(id)arg1;

@end
