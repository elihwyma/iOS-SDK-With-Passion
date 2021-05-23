/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedDescriptor.h>

@protocol FCPaidAccessCheckerType, FCTagProviding;

@interface FCSingleTagFeedDescriptor : FCFeedDescriptor

{
    id <FCTagProviding> _tag;
    long long _feedType;
    long long _feedSortMethod;
    long long _feedFilterOptions;
    long long _feedPersonalizationConfigurationSet;
    id <FCTagProviding> _masterTag;
    id <FCPaidAccessCheckerType> _paidAccessChecker;
}

@property (copy, nonatomic) id <FCTagProviding> tag;
@property (copy, nonatomic, readonly) id <FCTagProviding> masterTag;
@property (retain, nonatomic) id <FCPaidAccessCheckerType> paidAccessChecker;

- (_Bool)isEqual:(id)arg1;
- (id)name;
- (id)initWithIdentifier:(id)arg1;
- (id)theme;
- (id)iAdCategories;
- (id)iAdKeywords;
- (long long)feedPersonalizationConfigurationSet;
- (_Bool)isSubscribable;
- (id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2;
- (long long)iAdContentProvider;
- (id)iAdPrimaryAudience;
- (id)iAdFeedID;
- (id)iAdSectionID;
- (id)languagesWithSubscriptionController:(id)arg1;
- (_Bool)hideAccessoryText;
- (_Bool)subscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 error:(id *)arg3;
- (_Bool)isMutedWithSubscriptionController:(id)arg1;
- (void)unsubscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2;
- (_Bool)isSubscribedToWithSubscriptionController:(id)arg1;
- (_Bool)hasNotificationsEnabledWithSubscriptionController:(id)arg1;
- (id)backingTag;
- (id)backingChannel;
- (id)backingChannelID;
- (id)backingSectionID;
- (id)backingTopicID;
- (id)allEmitterClasses;
- (void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)feedSortMethod;
- (long long)feedFilterOptions;
- (long long)feedType;
- (void)setFeedType:(long long)arg1;
- (id)initWithContext:(id)arg1 tag:(id)arg2 sortMethod:(long long)arg3 filterOptions:(long long)arg4 personalizationConfigurationSet:(long long)arg5 paidAccessChecker:(id)arg6;
- (id)initWithContext:(id)arg1 tag:(id)arg2 paidAccessChecker:(id)arg3;

@end
