/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3MusicLibrary, NSMutableArray, NSMutableOrderedSet, NSString;

@protocol OS_dispatch_queue;

@interface ML3LibraryNotificationManager : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_notificationObservers;
    NSMutableOrderedSet *_queuedLocalNotifications;
    NSMutableOrderedSet *_queuedDistributedNotificationNames;
    ML3MusicLibrary *_library;
}

@property (weak, nonatomic, readonly) ML3MusicLibrary *library;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)observerShouldForwardDistributedNotification:(id)arg1;
- (id)initWithLibrary:(id)arg1 distributedAndLocalNames:(id)arg2;
- (void)enqueueDistributedNotificationNamed:(id)arg1;
- (void)enqueueLocalNotificationNamed:(id)arg1;
- (void)removeObserverWithDistributedName:(id)arg1;
- (void)_postEnqueuedLocalNotifications;
- (void)enqueueLocalNotification:(id)arg1;
- (void)_postEnqueuedDistributedNotifications;
- (id)_observerForDistributedName:(id)arg1;
- (void)addObserverForDistributedName:(id)arg1 localName:(id)arg2;
- (void)removeObserverWithLocalName:(id)arg1;
- (id)_observerForLocalName:(id)arg1;

@end
