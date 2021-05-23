/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactStore, CNMutableMultiDictionary;

@protocol CNScheduler;

@interface CNContactChangesNotifier : NSObject

{
    _Bool _observingNotification;
    id <CNScheduler> _resourceLock;
    id <CNScheduler> _workQueue;
    id <CNScheduler> _downstream;
    CNContactStore *_contactStore;
    CNMutableMultiDictionary *_registeredObservers;
}

@property (nonatomic, readonly) id <CNScheduler> resourceLock;
@property (nonatomic, readonly) id <CNScheduler> workQueue;
@property (nonatomic, readonly) id <CNScheduler> downstream;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) CNMutableMultiDictionary *registeredObservers;
@property (nonatomic, getter=isObservingNotification) _Bool observingNotification;

+ (id)os_log;
+ (id)sharedNotifier;
+ (id)createProxyForObserver:(id)arg1 keysToFetch:(id)arg2;
+ (id)preparedContact:(id)arg1 withStore:(id)arg2 keysToFetch:(id)arg3;
+ (id)workQueue_createFetchersFromRegisteredObservers:(id)arg1;

- (id)init;
- (id)initWithContactStore:(id)arg1 downstreamScheduler:(id)arg2 schedulerProvider:(id)arg3;
- (void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3;
- (void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)registerProxy:(id)arg1 identifier:(id)arg2;
- (_Bool)resourceLock_removeProxiesPassingTest:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;
- (void)workQueue_updateObserving;
- (void)unregisterObserver:(id)arg1 forContact:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)workQueue_updateObservers;
- (void)contactStoreDidChange:(id)arg1;
- (void)registerObserver:(id)arg1 forContact:(id)arg2;
- (void)unregisterObserver:(id)arg1 forContact:(id)arg2;

@end
