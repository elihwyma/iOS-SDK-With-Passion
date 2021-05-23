/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLEnhancedTaskingAgent

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitionAppSwitchTrigger;
+ (id)entryEventIntervalDefinitionUINavigationController;
+ (id)entryEventIntervalDefinitionUITabBarController;
+ (id)entryEventIntervalDefinitionScrollView;
+ (_Bool)shouldLogAggregatedDataFromSignpost;
+ (void)logAggregatedDataFromSignpostWithStartDate:(id)arg1 withEndDate:(id)arg2;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
- (void)logAggregatedDataFromSignpostWithPayload:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3;
- (int)getSignpostNameValueGroupTypeFor:(id)arg1;

@end
