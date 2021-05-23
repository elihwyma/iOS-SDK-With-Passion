/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMapTable, NSMutableArray, NSString, NSXPCConnection, PFDispatchQueue, PHAExecutive, PHAManager;

@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface PHAServiceClientHandler : NSObject

{
    NSString *_clientBundleID;
    NSMapTable *_cancelableOperationsById;
    NSMutableArray *_clientHandlers;
    unsigned long long _graphLoadCount;
    NSObject<OS_dispatch_group> *_graphReady;
    PFDispatchQueue *_graphLoadQueue;
    PHAManager *_photoAnalysisManager;
    NSXPCConnection *_xpcConnection;
    PHAExecutive *_executive;
    NSObject<OS_dispatch_semaphore> *_invalidationSemaphore;
    id _serviceUnavailableHandler;
    NSLock *_sharedOperationLock;
}

@property (retain) NSXPCConnection *xpcConnection;
@property (retain) PHAManager *photoAnalysisManager;
@property (weak) PHAExecutive *executive;
@property (retain) NSObject<OS_dispatch_semaphore> *invalidationSemaphore;
@property (retain) id serviceUnavailableHandler;
@property (readonly) NSString *clientBundleID;
@property (retain, nonatomic) NSLock *sharedOperationLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (void)shutdown;
- (void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)loadGraphWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)unloadGraphWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)handleOperation:(id)arg1;
- (_Bool)wantsLiveGraphUpdates;
- (_Bool)wantsGraphUpdateNotifications;
- (void)graphUpdateMadeProgress:(double)arg1;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateDidStop;
- (void)graphBecameReady:(id)arg1 forPHAGraphManager:(id)arg2;
- (id)initWithXPCConnection:(id)arg1 executive:(id)arg2;
- (_Bool)isplphotosctl;
- (_Bool)isPhotos;
- (void)submitBlockToExecutiveStateQueue:(CDUnknownBlockType)arg1;
- (id)cancelableOperationsById;
- (id)forwardingTargetForInvocation:(id)arg1 contextInformation:(id)arg2;
- (id)managerForInvocation:(id)arg1 contextInformation:(id)arg2;
- (id)contextInformationFromInvocation:(id)arg1;
- (id)libraryURLFromContextInformation:(id)arg1;

@end
