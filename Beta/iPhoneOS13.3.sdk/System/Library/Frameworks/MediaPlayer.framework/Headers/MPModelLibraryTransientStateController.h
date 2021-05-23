/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSOperationQueue;

@protocol OS_dispatch_queue;

@interface MPModelLibraryTransientStateController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_registeredTransientState;
}

+ (id)sharedDeviceLibraryController;

- (id)init;
- (void)addOperation:(id)arg1;
- (id)registerTransientAddState:(long long)arg1 forModelObjects:(id)arg2 relatedModelObjects:(id)arg3;
- (id)registerTransientKeepLocalState:(long long)arg1 forModelObjects:(id)arg2 relatedModelObjects:(id)arg3;
- (void)unregisterTransientState:(id)arg1;
- (long long)transientAddStateForModelObject:(id)arg1;
- (long long)transientKeepLocalStateForModelObject:(id)arg1;
- (void)performDeleteEntityChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2;
- (void)performDeleteEntityChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performLibraryImportChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2;
- (void)performLibraryImportChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performKeepLocalChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2;
- (void)performKeepLocalChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
