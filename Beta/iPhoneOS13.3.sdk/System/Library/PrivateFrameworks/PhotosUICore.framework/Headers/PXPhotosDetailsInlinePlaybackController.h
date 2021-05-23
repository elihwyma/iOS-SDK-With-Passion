/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGridInlinePlaybackController.h>

@class NSObject, PXTilingController;

@protocol OS_dispatch_queue, PXPhotosDetailsInlinePlaybackControllerDelegate;

@interface PXPhotosDetailsInlinePlaybackController : PXGridInlinePlaybackController

{
    NSObject<OS_dispatch_queue> *_recordCreationQueue;
    PXTilingController *_tilingController;
    id <PXPhotosDetailsInlinePlaybackControllerDelegate> _delegate;
}

@property (nonatomic, readonly) PXTilingController *tilingController;
@property (weak, nonatomic) id <PXPhotosDetailsInlinePlaybackControllerDelegate> delegate;

- (id)init;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;
- (struct CGRect)currentVisibleRect;
- (struct CGRect)frameForPlaybackRecord:(id)arg1 minPlayableSize:(out struct CGSize *)arg2;
- (_Bool)shouldEnablePlayback;
- (_Bool)canPlayAsset:(id)arg1;
- (id)initWithTilingController:(id)arg1;
- (_Bool)_isRecognizedTileIdentifier:(struct PXTileIdentifier)arg1;
- (struct PXTileIdentifier)_currentTileIdentifierForRecord:(id)arg1;
- (void)checkOutTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void)updatePlaybackEnabled;

@end
