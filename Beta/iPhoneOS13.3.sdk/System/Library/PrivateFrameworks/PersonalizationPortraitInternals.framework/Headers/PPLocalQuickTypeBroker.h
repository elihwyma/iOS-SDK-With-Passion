/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

#import <PersonalizationPortraitInternals/Swift-Protocol.h>

@class PPM2FeedbackPortraitRegistered, PPMFeedbackRegistered, PPQuickTypeConnectionsServant, PPQuickTypeContactsServant, PPQuickTypeEventsServant, PPQuickTypeNavigationServant, _PASLock;

@interface PPLocalQuickTypeBroker : NSObject <Swift>

{
    PPQuickTypeNavigationServant *_navigationServant;
    PPQuickTypeContactsServant *_contactsServant;
    PPQuickTypeEventsServant *_eventsServant;
    PPQuickTypeConnectionsServant *_connectionsServant;
    _PASLock *_cacheLock;
    PPMFeedbackRegistered *_feedbackTracker;
    PPM2FeedbackPortraitRegistered *_feedbackTracker2;
}

+ (id)sharedInstance;

- (id)init;
- (void)_registerForNotifications;
- (void)_clearCaches;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)warmUpWithCompletion:(CDUnknownBlockType)arg1;
- (void)hibernateWithCompletion:(CDUnknownBlockType)arg1;
- (void)processFeedback:(id)arg1;
- (id)_quickTypeItemsFromServantsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (_Bool)_shouldUseCacheWithCacheEntry:(id)arg1 query:(id)arg2;
- (id)_recipientItemCacheKeyForRecipients:(id)arg1;
- (id)_cachedQuickTypeItemsWithQuery:(id)arg1;
- (id)_cachedQuickTypeItemsWithRecipients:(id)arg1;
- (id)_cacheEntryWithRecipients:(id)arg1;
- (id)filterFeedback:(id)arg1;

@end
