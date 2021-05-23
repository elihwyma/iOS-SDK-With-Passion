/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGridInlinePlaybackRecord.h>

@protocol _PXDetailsAutoplayTile;

@interface _PXDetailsPlaybackRecord : PXGridInlinePlaybackRecord

{
    struct PXTileIdentifier _tileIdentifier;
}

@property (nonatomic, readonly) id <_PXDetailsAutoplayTile> geometryReference;
@property (nonatomic) struct PXTileIdentifier tileIdentifier;

- (long long)desiredPlayState;
- (void)setDesiredPlayState:(long long)arg1;

@end
