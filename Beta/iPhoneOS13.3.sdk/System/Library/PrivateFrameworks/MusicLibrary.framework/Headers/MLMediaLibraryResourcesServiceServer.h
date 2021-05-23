/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, NSXPCListener;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MLMediaLibraryResourcesServiceServer : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_semaphore> *_accountChangeSemaphore;
    NSXPCListener *_xpcServiceListener;
    NSMutableSet *_observers;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *accountChangeSemaphore;
@property (retain, nonatomic) NSXPCListener *xpcServiceListener;
@property (retain, nonatomic) NSMutableSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)performDatabasePathChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)emergencyDisconnectWithCompletion:(CDUnknownBlockType)arg1;
- (void)terminateForFailureToPerformDatabasePathChange;
- (void)libraryContainerPathWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccountChangeObserver:(id)arg1;
- (void)_blockExecutionForOnGoingAccountChangeIfNeeded;
- (void)_unblockExecutionForFutureAccountChange;

@end
