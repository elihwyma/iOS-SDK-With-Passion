/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBBMav13HwMsgParser.h>

@interface PLBBMav16BHwMsgParser : PLBBMav13HwMsgParser

{
    CDStruct_6ad76789 *_mav16BAppsPerf;
    CDStruct_ca3760f5 *_rfEnhWCDMAMav16B;
    CDStruct_ac158e2a *_rfEnhLTEMav16B;
    CDStruct_58878026 *_mav16BAppsSleepVeto;
    CDStruct_e6c877ae *_mav16BMpssSleepVeto;
    CDStruct_2a75ea3f *_mav16BQdspSpeed;
    CDStruct_28e9ceb1 *_mcpmSleepVetoMav16B;
}

@property (nonatomic) CDStruct_6ad76789 *mav16BAppsPerf;
@property (nonatomic) CDStruct_ca3760f5 *rfEnhWCDMAMav16B;
@property (nonatomic) CDStruct_ac158e2a *rfEnhLTEMav16B;
@property (nonatomic) CDStruct_58878026 *mav16BAppsSleepVeto;
@property (nonatomic) CDStruct_e6c877ae *mav16BMpssSleepVeto;
@property (nonatomic) CDStruct_2a75ea3f *mav16BQdspSpeed;
@property (nonatomic) CDStruct_28e9ceb1 *mcpmSleepVetoMav16B;

- (void)parseData:(id)arg1;
- (void)logMav16HwRFEnhWCDMAWithLogger:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (void)logMav16BAppsPerfWithLogger:(id)arg1;
- (void)logMav16BMPSSWithLogger:(id)arg1;
- (void)logMav16BHwRFEnhLTEWithLogger:(id)arg1;

@end
