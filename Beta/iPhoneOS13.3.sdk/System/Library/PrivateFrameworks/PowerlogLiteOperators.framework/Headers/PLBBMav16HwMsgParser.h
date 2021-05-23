/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBBMav13HwMsgParser.h>

@interface PLBBMav16HwMsgParser : PLBBMav13HwMsgParser

{
    CDStruct_de2d41ce *_mav16AppsPerf;
    CDStruct_3c455a1d *_rfEnhWCDMAMav16;
    CDStruct_e83233e0 *_rfEnhLTEMav16;
    CDStruct_58878026 *_mav16AppsSleepVeto;
    CDStruct_e6c877ae *_mav16MpssSleepVeto;
    CDStruct_d8ec598b *_mav16QdspSpeed;
}

@property (nonatomic) CDStruct_de2d41ce *mav16AppsPerf;
@property (nonatomic) CDStruct_3c455a1d *rfEnhWCDMAMav16;
@property (nonatomic) CDStruct_e83233e0 *rfEnhLTEMav16;
@property (nonatomic) CDStruct_58878026 *mav16AppsSleepVeto;
@property (nonatomic) CDStruct_e6c877ae *mav16MpssSleepVeto;
@property (nonatomic) CDStruct_d8ec598b *mav16QdspSpeed;

- (void)parseData:(id)arg1;
- (void)logMav16AppsPerfWithLogger:(id)arg1;
- (void)logMav16MPSSWithLogger:(id)arg1;
- (void)logMav16HwRFEnhLTEWithLogger:(id)arg1;
- (void)logMav16HwRFEnhWCDMAWithLogger:(id)arg1;
- (void)logWithLogger:(id)arg1;

@end
