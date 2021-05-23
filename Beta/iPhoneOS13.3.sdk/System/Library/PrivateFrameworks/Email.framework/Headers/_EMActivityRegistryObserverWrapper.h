/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class EMActivityRegistry, EMRemoteConnection, NSArray, NSMutableDictionary, NSString;

@protocol EFCancelable, EMActivityObserver;

__attribute__((visibility("hidden")))
@interface _EMActivityRegistryObserverWrapper : NSObject <Swift>

{
    id <EFCancelable> _observerCancelable;
    NSMutableDictionary *_trackedActivities;
    struct os_unfair_lock_s _lock;
    EMRemoteConnection *_connection;
    EMActivityRegistry *_registry;
    id <EMActivityObserver> _observer;
}

@property (retain) EMRemoteConnection *connection;
@property (weak) EMActivityRegistry *registry;
@property (weak) id <EMActivityObserver> observer;
@property (retain) NSArray *activities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)_resetWithCancelable:(id)arg1;
- (void)_recover;
- (void)_startObservingIfNecessary;
- (id)activityWithObjectID:(id)arg1;
- (void)startedActivity:(id)arg1;
- (void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3;
- (void)activityWithID:(id)arg1 setCompletedCount:(id)arg2 totalCount:(id)arg3;
- (void)activityWithID:(id)arg1 finishedWithError:(id)arg2;
- (void)removedActivityWithID:(id)arg1;
- (id)initWithConnection:(id)arg1 registry:(id)arg2 observer:(id)arg3;

@end
