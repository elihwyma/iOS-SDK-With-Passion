/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString, NSXPCConnection;

@protocol MLMediaLibraryAccountChangeObserver, OS_dispatch_queue;

@interface MLMediaLibraryResourcesServiceClient : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_xpcClientConnection;
    id <MLMediaLibraryAccountChangeObserver> _accountChangeObserver;
    NSOperationQueue *_accountChangeOperationQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSXPCConnection *xpcClientConnection;
@property (retain, nonatomic) id <MLMediaLibraryAccountChangeObserver> accountChangeObserver;
@property (retain, nonatomic) NSOperationQueue *accountChangeOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedService;

- (void)performDatabasePathChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)emergencyDisconnectWithCompletion:(CDUnknownBlockType)arg1;
- (void)terminateForFailureToPerformDatabasePathChange;
- (id)_initWithAccountChangeObserver:(id)arg1;
- (id)_libraryContainerPathWithError:(id *)arg1;
- (id)connectionWithListenerEndpoint:(id)arg1;
- (id)libraryContainerPathWithError:(id *)arg1;

@end
