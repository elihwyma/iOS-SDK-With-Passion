/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, PHFetchResult;

@protocol OS_dispatch_queue, PUSearchGridDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface PUSearchGridDataSource : NSObject

{
    _Bool _finished;
    _Bool _hasPendingChanges;
    id <PUSearchGridDataSourceDelegate> _delegate;
    NSSet *_assetUUIDs;
    unsigned long long _searchCategories;
    NSString *_title;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _taskId;
    PHFetchResult *_fetchResult;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long taskId;
@property (nonatomic) _Bool hasPendingChanges;
@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (retain, nonatomic) NSSet *assetUUIDs;
@property (weak, nonatomic) id <PUSearchGridDataSourceDelegate> delegate;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;
@property (nonatomic) unsigned long long searchCategories;
@property (retain, nonatomic) NSString *title;

- (id)init;
- (void)mergePendingChanges;
- (_Bool)_inqIsCancelledWithTaskId:(unsigned long long)arg1;
- (_Bool)_isCancelledWithTaskId:(unsigned long long)arg1;
- (void)updateAssetUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_inqClearPendingChanges;
- (void)updateFetchResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateFetchResult:(id)arg1 taskId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
