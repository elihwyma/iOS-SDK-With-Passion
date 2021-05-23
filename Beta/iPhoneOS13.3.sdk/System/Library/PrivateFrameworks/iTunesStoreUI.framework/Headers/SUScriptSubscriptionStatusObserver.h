/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, SUScriptSubscriptionStatusResponse;

@protocol OS_dispatch_queue;

@interface SUScriptSubscriptionStatusObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSNumber *_lastKnownActiveAccountUniqueIdentifier;
    SUScriptSubscriptionStatusResponse *_lastKnownSubscriptionStatusResponse;
}

+ (id)sharedObserver;

- (id)init;
- (void)dealloc;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)arg1;

@end
