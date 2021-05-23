/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface SKUIToggleStateCenter : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_itemStates;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
}

+ (id)defaultCenter;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
- (_Bool)updateItem:(id)arg1;
- (void)_notifyObserversOfStateChanges:(id)arg1;
- (void)clearAll;
- (void)_accountStoreChangeNotification:(id)arg1;

@end
