/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface ML3MusicLibraryAccountChangeObserverProxy : NSObject

{
    NSHashTable *_weakObservers;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, readonly) NSHashTable *weakObservers;
@property (nonatomic, readonly) NSHashTable *readonlyObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedProxy;

- (id)_init;
- (void)addAccountChangeObserver:(id)arg1;
- (void)performDatabasePathChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)emergencyDisconnectWithCompletion:(CDUnknownBlockType)arg1;
- (void)terminateForFailureToPerformDatabasePathChange;
- (void)removeAccountChangeObserver:(id)arg1;

@end
