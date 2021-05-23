/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class PLHIDEventOperatorComposition;

@interface PLButtonAgent : PLAgent

{
    PLHIDEventOperatorComposition *_menuButton;
    PLHIDEventOperatorComposition *_powerButton;
}

@property (retain) PLHIDEventOperatorComposition *menuButton;
@property (retain) PLHIDEventOperatorComposition *powerButton;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventPointButtonWithEntry:(id)arg1;

@end
