/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLMav7BasebandHardwareMessage.h>

@interface PLBBMav13HwMsgParser : PLMav7BasebandHardwareMessage

{
    CDStruct_162c5519 *_rfLTE;
    CDStruct_7658c0cd *_rpmData;
    CDStruct_b5f3bcd2 *_appsPerf;
    CDStruct_d008d4b8 *_appsSleep;
    CDStruct_22c8f40a *_pcieState;
    CDStruct_52eb0d21 *_lpassState;
    CDStruct_8c9fbaa1 *_appsSleepVeto;
    CDStruct_0808d09a *_mpssSleepVeto;
    CDStruct_713664b0 *_qdspSpeed;
    CDStruct_d008d4b8 *_mpssSleep;
    CDStruct_52eb0d21 *_gpsState;
    CDStruct_52eb0d21 *_gpsDpoState;
    CDStruct_b5f3bcd2 *_gpsDpoBins;
    CDStruct_a3680ba7 *_mcpmSleepVeto;
    CDStruct_b5f3bcd2 *_protocolActive;
    CDStruct_d8ec598b *_protocolState;
    CDStruct_d8ec598b *_protoStateC2K;
    CDStruct_d8ec598b *_protoStateHDR;
    CDStruct_d8ec598b *_protoStateGSM;
    CDStruct_d8ec598b *_protoStateWCDMA;
    CDStruct_d8ec598b *_protoStateLTE;
    CDStruct_d8ec598b *_protoStateTDS;
    char *_optimMaskArray;
    CDStruct_549c72c8 *_rfData;
    CDStruct_12fa032f *_rfDataC2K;
    CDStruct_12fa032f *_rfData1xEVDO;
    CDStruct_12fa032f *_rfDataGSM;
    CDStruct_10ab3012 *_rfDataWCDMA;
    CDStruct_12fa032f *_rfDataLTE;
    CDStruct_12fa032f *_rfDataTDS;
    char *_rfEnhData;
    CDStruct_9b497bd6 *_rfEnhC2K;
    CDStruct_ba477c7b *_rfEnh1xEVDO;
    CDStruct_1addce7e *_rfEnhGSM;
    CDStruct_ca3760f5 *_rfEnhWCDMA;
    CDStruct_d45577fa *_rfEnhLTE;
    CDStruct_11910088 *_rfEnhTDS;
    CDStruct_1c5e9233 *_rfEnhOOS;
}

@property (nonatomic) CDStruct_162c5519 *rfLTE;
@property (nonatomic) CDStruct_7658c0cd *rpmData;
@property (nonatomic) CDStruct_b5f3bcd2 *appsPerf;
@property (nonatomic) CDStruct_d008d4b8 *appsSleep;
@property (nonatomic) CDStruct_22c8f40a *pcieState;
@property (nonatomic) CDStruct_52eb0d21 *lpassState;
@property (nonatomic) CDStruct_8c9fbaa1 *appsSleepVeto;
@property (nonatomic) CDStruct_0808d09a *mpssSleepVeto;
@property (nonatomic) CDStruct_713664b0 *qdspSpeed;
@property (nonatomic) CDStruct_d008d4b8 *mpssSleep;
@property (nonatomic) CDStruct_52eb0d21 *gpsState;
@property (nonatomic) CDStruct_52eb0d21 *gpsDpoState;
@property (nonatomic) CDStruct_b5f3bcd2 *gpsDpoBins;
@property (nonatomic) CDStruct_a3680ba7 *mcpmSleepVeto;
@property (nonatomic) CDStruct_b5f3bcd2 *protocolActive;
@property (nonatomic) CDStruct_d8ec598b *protocolState;
@property (nonatomic) CDStruct_d8ec598b *protoStateC2K;
@property (nonatomic) CDStruct_d8ec598b *protoStateHDR;
@property (nonatomic) CDStruct_d8ec598b *protoStateGSM;
@property (nonatomic) CDStruct_d8ec598b *protoStateWCDMA;
@property (nonatomic) CDStruct_d8ec598b *protoStateLTE;
@property (nonatomic) CDStruct_d8ec598b *protoStateTDS;
@property (nonatomic) char *optimMaskArray;
@property (nonatomic) CDStruct_549c72c8 *rfData;
@property (nonatomic) CDStruct_12fa032f *rfDataC2K;
@property (nonatomic) CDStruct_12fa032f *rfData1xEVDO;
@property (nonatomic) CDStruct_12fa032f *rfDataGSM;
@property (nonatomic) CDStruct_10ab3012 *rfDataWCDMA;
@property (nonatomic) CDStruct_12fa032f *rfDataLTE;
@property (nonatomic) CDStruct_12fa032f *rfDataTDS;
@property (nonatomic) char *rfEnhData;
@property (nonatomic) CDStruct_9b497bd6 *rfEnhC2K;
@property (nonatomic) CDStruct_ba477c7b *rfEnh1xEVDO;
@property (nonatomic) CDStruct_1addce7e *rfEnhGSM;
@property (nonatomic) CDStruct_ca3760f5 *rfEnhWCDMA;
@property (nonatomic) CDStruct_d45577fa *rfEnhLTE;
@property (nonatomic) CDStruct_11910088 *rfEnhTDS;
@property (nonatomic) CDStruct_1c5e9233 *rfEnhOOS;

+ (id)optimMaskMappings;

- (id)initWithData:(id)arg1;
- (void)parseData:(id)arg1;
- (int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask *)arg1;
- (void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask *)arg1 oftype:(int)arg2 withData:(char *)arg3;
- (void)logRPMWithLogger:(id)arg1;
- (void)logLPASSWithLogger:(id)arg1;
- (void)logPeripheralsWithLogger:(id)arg1;
- (void)logPcieWithLogger:(id)arg1;
- (void)logProtocolWithLogger:(id)arg1 container:(id)arg2 state:(CDStruct_d8ec598b *)arg3 forRAT:(unsigned int)arg4;
- (void)logSleepVetoWithLogger:(id)arg1;
- (void)logLegacyRFWithLogger:(id)arg1 usingData:(CDStruct_12fa032f *)arg2 forRAT:(unsigned int)arg3;
- (void)logProtocolOnlyWithLogger:(id)arg1 forRAT:(unsigned int)arg2;
- (void)logHwRFGSMWithLogger:(id)arg1;
- (void)logHwRFTDSWithLogger:(id)arg1;
- (void)logHwRF1xWithLogger:(id)arg1;
- (void)logHwRFHDRWithLogger:(id)arg1;
- (void)logHwRFOOSWithLogger:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (void)logMPSSWithLogger:(id)arg1;
- (void)logAppsPerfWithLogger:(id)arg1;
- (void)logHwRFEnhLTEWithLogger:(id)arg1;
- (void)logHwRFEnhWCDMAWithLogger:(id)arg1;

@end
