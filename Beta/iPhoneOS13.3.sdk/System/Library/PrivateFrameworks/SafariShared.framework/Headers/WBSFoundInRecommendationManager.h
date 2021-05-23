/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, SGSuggestionsServiceURLsProtocol;

@interface WBSFoundInRecommendationManager : NSObject

{
    NSObject<SGSuggestionsServiceURLsProtocol> *_suggestionsService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    int _changeNotificationToken;
}

+ (_Bool)isBundleIdentifierFromMessages:(id)arg1;
+ (id)_linkRecommendationsFromSGSuggestions:(id)arg1 contactStoreProvider:(CDUnknownBlockType)arg2;
+ (unsigned long long)foundInSourceFromBundleIdentifier:(id)arg1;
+ (_Bool)isBundleIdentifierFromCalendar:(id)arg1;

- (void)recentRecommendationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginListeningForURLSuggestionChanges;
- (void)stopListeningForURLSuggestionChanges;
- (void)_createInternalQueueIfNecessary;
- (void)_recentURLRecommendationsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
