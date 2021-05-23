/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class NSNumber, NSString, PLIOKitOperatorComposition, PLTimer;

@interface PLSmartConnectorAgent : PLAgent

{
    PLIOKitOperatorComposition *_iokitOrion;
    PLTimer *_timer;
    NSNumber *_preStatus;
    NSNumber *_curStatus;
    NSString *_preAccessoryName;
    NSString *_curAccessoryName;
}

@property (readonly) PLIOKitOperatorComposition *iokitOrion;
@property (retain) PLTimer *timer;
@property (retain) NSNumber *preStatus;
@property (retain) NSNumber *curStatus;
@property (retain) NSString *preAccessoryName;
@property (retain) NSString *curAccessoryName;

+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionStatus;

- (id)init;
- (void)log;
- (void)reArmCallback;
- (void)logEventForwardStatus:(id)arg1 withName:(id)arg2;

@end
