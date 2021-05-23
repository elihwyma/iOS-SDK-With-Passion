/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <PLAgent.h>

@class PLCFNotificationOperatorComposition;

@interface PLPersistentConnectionAgent : PLAgent

{
    PLCFNotificationOperatorComposition *_intervalChangedNotification;
    PLCFNotificationOperatorComposition *_preferencesChangedNotification;
}

@property (readonly) PLCFNotificationOperatorComposition *intervalChangedNotification;
@property (readonly) PLCFNotificationOperatorComposition *preferencesChangedNotification;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;

- (id)init;
- (void)log;
- (long long)pollingInterval;
- (void)initOperatorDependancies;
- (void)logEventForwardConfig;
- (void)logEventPointCache;
- (_Bool)pushEnabled;

@end
