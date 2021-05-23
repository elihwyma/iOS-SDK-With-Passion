/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTCoreEnvironment, NSMutableArray;

@protocol AVTCoreDataPersistentStoreConfiguration, AVTEventCoalescer, AVTUILogger, NSObject, OS_dispatch_queue;

@interface AVTCoreDataRemoteChangesObserver : NSObject

{
    id <AVTCoreDataPersistentStoreConfiguration> _configuration;
    id <AVTUILogger> _logger;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <AVTEventCoalescer> _coalescer;
    AVTCoreEnvironment *_environment;
    id <NSObject> _observationToken;
    NSMutableArray *_changeHandlers;
    NSMutableArray *_transactionsForPendingChanges;
}

@property (nonatomic, readonly) id <AVTCoreDataPersistentStoreConfiguration> configuration;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) id <AVTEventCoalescer> coalescer;
@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (retain, nonatomic) id <NSObject> observationToken;
@property (nonatomic, readonly) NSMutableArray *changeHandlers;
@property (nonatomic, readonly) NSMutableArray *transactionsForPendingChanges;

- (void)addChangesHandler:(CDUnknownBlockType)arg1;
- (_Bool)isObservingChanges;
- (void)startObservingChanges;
- (id)initWithConfiguration:(id)arg1 workQueue:(id)arg2 coalescer:(id)arg3 environment:(id)arg4;
- (void)performManagedObjectContextWork:(CDUnknownBlockType)arg1;
- (void)registerCoalescerEventHandler;
- (void)processRemoteChangeNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)changeTransactionsForToken:(id)arg1 managedObjectContext:(id)arg2;

@end
