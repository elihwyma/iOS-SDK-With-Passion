/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <SpringBoardServices/SBSAbstractSystemService.h>

@class BSMutableIntegerMap;

@interface SBSHardwareButtonService : SBSAbstractSystemService

{
    BSMutableIntegerMap *_consumersPerKind;
    BSMutableIntegerMap *_buttonConfigurationsPerKind;
    BSMutableIntegerMap *_requestHIDAssertionsPerKind;
}

@property (retain, nonatomic) BSMutableIntegerMap *consumersPerKind;
@property (retain, nonatomic) BSMutableIntegerMap *buttonConfigurationsPerKind;
@property (retain, nonatomic) BSMutableIntegerMap *requestHIDAssertionsPerKind;

+ (id)sharedInstance;

- (id)description;
- (void)consumerInfoWillInvalidate:(id)arg1;
- (void)_setApplicationClientEventMask:(unsigned long long)arg1 buttonKind:(long long)arg2 priority:(long long)arg3;
- (void)_resetEventMaskForButtonKind:(long long)arg1;
- (id)_viableConsumerForButtonKind:(long long)arg1 event:(long long)arg2 priority:(long long)arg3;
- (void)_addEventConsumerInfo:(id)arg1;
- (long long)toggleStateForButtonKind:(long long)arg1;
- (void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2;
- (void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_mainQueue_handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (void)acquireHomeHardwareButtonHintSuppressionAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)beginConsumingPressesForButtonKind:(long long)arg1 eventConsumer:(id)arg2 priority:(long long)arg3;
- (id)deferHIDEventsForButtonKind:(long long)arg1 toToken:(id)arg2;
- (void)handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;

@end
