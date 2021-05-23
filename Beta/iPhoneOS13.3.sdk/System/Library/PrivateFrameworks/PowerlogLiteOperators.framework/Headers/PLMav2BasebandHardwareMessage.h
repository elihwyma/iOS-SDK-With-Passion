/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandHardwareMessage.h>

@interface PLMav2BasebandHardwareMessage : PLBasebandHardwareMessage

{
    struct _PLMav2BasebandHWStatsRX *_mav2_rx;
    struct _PLMav2BasebandHWStatsTX *_mav2_tx;
}

@property (nonatomic) struct _PLMav2BasebandHWStatsRX *rx;
@property (nonatomic) struct _PLMav2BasebandHWStatsTX *tx;

- (id)initWithData:(id)arg1;
- (void)parseData:(id)arg1;
- (void)logHeaderWithLogger:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (void)logRFWithLogger2:(id)arg1;
- (id)indexToRAT:(unsigned long long)arg1;

@end
