/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol OS_dispatch_queue;

@interface SFSuggestedUserProvider : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_suggestedEmails;
    NSArray *_suggestedNonEmails;
}

+ (id)sharedProvider;

- (id)init;
- (void)suggestedUsersOfType:(long long)arg1 matchingText:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)suggestedUsersOfType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_passwordStoreChangedNotification:(id)arg1;
- (id)_allCachedSuggestedUsersWithType:(long long)arg1;
- (id)_cachedSuggestedUsersWithType:(long long)arg1 matchingText:(id)arg2;
- (void)_getSuggestedUsersFromSavedPasswords:(id)arg1 suggestedEmails:(id *)arg2 suggestedNonEmails:(id *)arg3;

@end
