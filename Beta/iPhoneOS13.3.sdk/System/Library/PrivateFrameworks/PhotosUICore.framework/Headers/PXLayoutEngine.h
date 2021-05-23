/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXLayoutGenerator, PXLayoutSnapshot;

@protocol OS_dispatch_queue, PXLayoutDataSourceChangeDetails, PXLayoutEngineDataSourceSnapshot, PXLayoutEngineDelegate, PXLayoutItem;

@interface PXLayoutEngine : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_internalWorkQueue;
    struct {
        _Bool layoutData;
        _Bool layoutSnapshot;
    } _needsUpdateFlags;
    id <PXLayoutEngineDelegate> _delegate;
    PXLayoutSnapshot *_layoutSnapshot;
    id <PXLayoutEngineDataSourceSnapshot> _dataSourceSnapshot;
    id <PXLayoutItem> _seedItem;
    PXLayoutGenerator *_layoutGenerator;
    id <PXLayoutDataSourceChangeDetails> _changeDetails;
}

@property (retain, nonatomic) id <PXLayoutDataSourceChangeDetails> changeDetails;
@property (retain, nonatomic) PXLayoutGenerator *layoutGenerator;
@property (retain, nonatomic) PXLayoutSnapshot *layoutSnapshot;
@property (weak, nonatomic) id <PXLayoutEngineDelegate> delegate;
@property (nonatomic, readonly) id <PXLayoutEngineDataSourceSnapshot> dataSourceSnapshot;
@property (nonatomic, readonly) id <PXLayoutItem> seedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setDataSourceSnapshot:(id)arg1;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (void)_publishChanges;
- (void)_updateIfNeeded;
- (void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2;
- (void)setSeedItem:(id)arg1;
- (id)initWithLayoutGenerator:(id)arg1 dataSourceSnapshot:(id)arg2;
- (id)performChangesAndWait:(CDUnknownBlockType)arg1;
- (void)invalidateLayoutSnapshot;
- (void)_updateLayoutSnapshotIfNeeded;
- (void)invalidateLayoutData;
- (void)_updateLayoutDataIfNeeded;
- (_Bool)canComputeLayoutSnapshot;
- (void)updateLayoutDataWithChangeDetails:(id)arg1;
- (id)computeLayoutSnapshot;

@end
