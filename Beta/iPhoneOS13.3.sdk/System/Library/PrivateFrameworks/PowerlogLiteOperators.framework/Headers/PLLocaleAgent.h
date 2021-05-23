/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent

{
    PLNSNotificationOperatorComposition *_timeNotification;
}

@property (retain) PLNSNotificationOperatorComposition *timeNotification;

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
- (void)logEventForwardTimeZoneWithTrigger:(id)arg1;
- (void)logEventForwardTimeZone;

@end
