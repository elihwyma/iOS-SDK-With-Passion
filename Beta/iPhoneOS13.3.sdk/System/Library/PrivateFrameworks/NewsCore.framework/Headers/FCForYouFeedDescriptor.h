/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedDescriptor.h>

@class FCSubscriptionList, NSString;

@protocol FCCoreConfigurationManager, FCFeedPersonalizing, FCPaidAccessCheckerType;

@interface FCForYouFeedDescriptor : FCFeedDescriptor

{
    unsigned long long _savedStoriesCount;
    id <FCCoreConfigurationManager> _configurationManager;
    FCSubscriptionList *_subscriptionList;
    id <FCFeedPersonalizing> _feedPersonalizer;
    id <FCPaidAccessCheckerType> _paidAccessChecker;
}

@property (nonatomic) unsigned long long savedStoriesCount;
@property (retain, nonatomic) id <FCCoreConfigurationManager> configurationManager;
@property (retain, nonatomic) FCSubscriptionList *subscriptionList;
@property (retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer;
@property (retain, nonatomic) id <FCPaidAccessCheckerType> paidAccessChecker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)name;
- (long long)feedPersonalizationConfigurationSet;
- (id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2;
- (id)iAdFeedID;
- (id)languagesWithSubscriptionController:(id)arg1;
- (_Bool)derivesContentsFromExplicitSubscriptions;
- (_Bool)hasEditions;
- (id)offlineFeedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2;
- (id)allEmitterClasses;
- (void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)needsForYouConfig;
- (_Bool)shouldFilterFeedGroupEmitter:(id)arg1 withConfiguration:(id)arg2;
- (id)feedPaginator;
- (long long)feedSortMethod;
- (long long)feedFilterOptions;
- (void)d_fetchAllHeadlinesWithCloudContext:(id)arg1 sinceDate:(id)arg2 filter:(_Bool)arg3 personalize:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)editionAtDate:(id)arg1;
- (id)editionFollowingEdition:(id)arg1;
- (id)_sortedConfigurableGroupEmittersWithForYouGroupsConfiguration:(id)arg1 forYouConfig:(id)arg2;
- (id)initWithIdentifier:(id)arg1 savedStoriesCount:(long long)arg2 configurationManager:(id)arg3 subscriptionList:(id)arg4 feedPersonalizer:(id)arg5 paidAccessChecker:(id)arg6;

@end
