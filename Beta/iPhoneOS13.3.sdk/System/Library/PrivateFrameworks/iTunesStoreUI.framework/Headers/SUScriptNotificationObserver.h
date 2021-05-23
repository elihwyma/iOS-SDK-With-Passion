/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSLock;

@interface SUScriptNotificationObserver : NSObject

{
    NSLock *_lock;
    struct __CFSet *_receivers;
}

- (id)init;
- (void)dealloc;
- (void)_accessibilityPerformEscape;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_purchaseRequestDidSucceedNotification:(id)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (void)addEventReceiver:(id)arg1;
- (void)removeEventReceiver:(id)arg1;
- (void)_endObservingNotifications;
- (void)_beginObservingNotifications;
- (void)_dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)_dispatchEventWithDictionary:(id)arg1 forName:(id)arg2;
- (id)_safariQueryDictionaryFromURL:(id)arg1;
- (void)_dispatchSafariEventWithDictionary:(id)arg1 andIdentifier:(id)arg2;
- (void)_enumerateReceiversUsingBlock:(CDUnknownBlockType)arg1;
- (void)_networkTypeChangedNotification:(id)arg1;
- (void)_audioSessionsChangedNotification:(id)arg1;
- (void)_storeBagDidChangeNotification:(id)arg1;
- (void)_safariViewControllerDataUpdate:(id)arg1;
- (void)_softwareMapChangedNotification:(id)arg1;
- (void)_accessibilityPerformScrollUp;
- (void)_accessibilityPerformScrollDown;
- (void)_accessibilityPerformScrollLeft;
- (void)_accessibilityPerformScrollRight;

@end
