/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSMutableOrderedSet, NSOrderedSet, NSSet, NSString;

@protocol OS_dispatch_queue, PUFilteredMomentsDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface PUFilteredMomentsDataSource : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _taskId;
    NSMutableOrderedSet *_uncommittedContainers;
    NSSet *_uncommittedAssetUUIDs;
    NSOrderedSet *_containers;
    NSSet *_assetUUIDs;
    _Bool _hasPendingChanges;
    _Bool _finished;
    id <PUFilteredMomentsDataSourceDelegate> _delegate;
}

@property (weak, nonatomic) id <PUFilteredMomentsDataSourceDelegate> delegate;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;
@property (nonatomic, readonly) NSSet *assetUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)fetchResult;
- (void)mergePendingChanges;
- (_Bool)_inqIsCancelledWithTaskId:(unsigned long long)arg1;
- (_Bool)_isCancelledWithTaskId:(unsigned long long)arg1;
- (void)updateAssetUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAssetUUIDs:(id)arg1 localIdenifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateAssetUUIDs:(id)arg1 localIdenifiers:(id)arg2 taskId:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_inqClearPendingChanges;

@end
