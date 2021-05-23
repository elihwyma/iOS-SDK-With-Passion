/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class PLCFNotificationOperatorComposition;

@interface PLAccessibilityAgent : PLAgent

{
    PLCFNotificationOperatorComposition *_notificationReduceMotionChanged;
    PLCFNotificationOperatorComposition *_notificationBackgroundContrastChanged;
}

@property (readonly) PLCFNotificationOperatorComposition *notificationReduceMotionChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationBackgroundContrastChanged;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventForwardReduceMotion;
- (void)logEventForwardBackgroundContrast;

@end
