/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSString;

@protocol FCChannelProviding, FCContentContext, FCFeedPaginating, FCFeedTheming, FCTagProviding;

@interface FCFeedDescriptor : NSObject <Swift>

{
    long long _feedType;
    NSString *_identifier;
    id <FCContentContext> _context;
    NSArray *_otherArticleIDs;
}

@property (nonatomic) long long feedType;
@property (nonatomic, readonly) _Bool needsForYouConfig;
@property (nonatomic, readonly) id <FCFeedPaginating> feedPaginator;
@property (nonatomic, readonly) long long feedSortMethod;
@property (nonatomic, readonly) long long feedFilterOptions;
@property (nonatomic, readonly) long long feedPersonalizationConfigurationSet;
@property (nonatomic, readonly) _Bool derivesContentsFromExplicitSubscriptions;
@property (nonatomic, readonly) _Bool hasEditions;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id <FCFeedTheming> theme;
@property (retain, nonatomic) id <FCContentContext> context;
@property (nonatomic, readonly) _Bool hideAccessoryText;
@property (retain, nonatomic) NSArray *otherArticleIDs;
@property (nonatomic, readonly) _Bool isSubscribable;
@property (nonatomic, readonly) id <FCTagProviding> backingTag;
@property (nonatomic, readonly) id <FCChannelProviding> backingChannel;
@property (nonatomic, readonly) NSString *backingChannelID;
@property (nonatomic, readonly) NSString *backingSectionID;
@property (nonatomic, readonly) NSString *backingTopicID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *iAdIdentifier;
@property (nonatomic, readonly) NSArray *iAdCategories;
@property (nonatomic, readonly) NSArray *iAdKeywords;
@property (nonatomic, readonly) long long iAdContentProvider;
@property (nonatomic, readonly) NSString *iAdPrimaryAudience;
@property (nonatomic, readonly) NSString *iAdFeedID;
@property (nonatomic, readonly) NSString *iAdSectionID;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)fetchOperationForHeadlinesWithIDs:(id)arg1 context:(id)arg2;
- (id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2;
- (id)streamOfLatestHeadlinesWithContext:(id)arg1;
- (void)fetchHeadlinesWithContext:(id)arg1 forIdentifiers:(id)arg2 downloadAssets:(_Bool)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)languagesWithSubscriptionController:(id)arg1;
- (_Bool)subscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 error:(id *)arg3;
- (_Bool)isMutedWithSubscriptionController:(id)arg1;
- (void)unsubscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2;
- (_Bool)isSubscribedToWithSubscriptionController:(id)arg1;
- (_Bool)hasNotificationsEnabledWithSubscriptionController:(id)arg1;
- (id)streamOfHeadlinesWithIDs:(id)arg1 context:(id)arg2 cachedOnly:(_Bool)arg3 maxCachedAge:(double)arg4;
- (id)offlineFeedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2;
- (id)allEmitterClasses;
- (void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldFilterFeedGroupEmitter:(id)arg1 withConfiguration:(id)arg2;
- (id)latestHeadlineResultsWithContext:(id)arg1;
- (void)d_fetchAllHeadlinesWithCloudContext:(id)arg1 sinceDate:(id)arg2 filter:(_Bool)arg3 personalize:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
