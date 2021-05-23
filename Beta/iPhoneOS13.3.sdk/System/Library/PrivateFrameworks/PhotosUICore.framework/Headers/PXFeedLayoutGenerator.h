/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXFeedLayoutGeneratorScanState;

@interface PXFeedLayoutGenerator : NSObject

{
    long long _cacheTailLocation;
    long long _cacheHeadLocation;
    struct PXTileInfo _cachedTileInfo[20];
    id _cachedBatchID[20];
    _Bool _scannedBatchHasCaption;
    _Bool _shouldStop;
    long long _tileCount;
    CDUnknownBlockType _tileImageSizeBlock;
    CDUnknownBlockType _tileMinimumSizeBlock;
    CDUnknownBlockType _tileHasCaptionBlock;
    CDUnknownBlockType _tileCaptionSizeBlock;
    CDUnknownBlockType _tileHasLikesBlock;
    CDUnknownBlockType _tileLikesSizeBlock;
    CDUnknownBlockType _tileCommentCountBlock;
    CDUnknownBlockType _tileCommentSizeBlock;
    CDUnknownBlockType _tileBatchIDBlock;
    long long _numberOfMagneticGuidelines;
    double _roundingScale;
    CDUnknownBlockType _parsedFrameBlock;
    long long _scanLocation;
    id _scannedBatchID;
    long long _scanSpecialSequenceCount;
    struct CGSize _interTileSpacing;
    struct CGSize _noCaptionSpacing;
    struct UIEdgeInsets _captionPadding;
}

@property (copy, nonatomic) CDUnknownBlockType parsedFrameBlock;
@property (nonatomic) PXFeedLayoutGeneratorScanState *scanState;
@property (nonatomic) long long scanLocation;
@property (retain, nonatomic) id scannedBatchID;
@property (nonatomic) _Bool scannedBatchHasCaption;
@property (nonatomic) long long scanSpecialSequenceCount;
@property (nonatomic, readonly) _Bool isAtEnd;
@property (nonatomic) _Bool shouldStop;
@property (nonatomic) long long tileCount;
@property (nonatomic) struct CGSize interTileSpacing;
@property (copy, nonatomic) CDUnknownBlockType tileImageSizeBlock;
@property (copy, nonatomic) CDUnknownBlockType tileMinimumSizeBlock;
@property (nonatomic) struct UIEdgeInsets captionPadding;
@property (nonatomic) struct CGSize noCaptionSpacing;
@property (copy, nonatomic) CDUnknownBlockType tileHasCaptionBlock;
@property (copy, nonatomic) CDUnknownBlockType tileCaptionSizeBlock;
@property (copy, nonatomic) CDUnknownBlockType tileHasLikesBlock;
@property (copy, nonatomic) CDUnknownBlockType tileLikesSizeBlock;
@property (copy, nonatomic) CDUnknownBlockType tileCommentCountBlock;
@property (copy, nonatomic) CDUnknownBlockType tileCommentSizeBlock;
@property (copy, nonatomic) CDUnknownBlockType tileBatchIDBlock;
@property (nonatomic) long long numberOfMagneticGuidelines;
@property (nonatomic) double roundingScale;

- (id)init;
- (void)enumerateFramesWithBlock:(CDUnknownBlockType)arg1;
- (void)willParseTiles;
- (void)didParseTiles;
- (_Bool)scanAnyTile:(struct PXTileInfo *)arg1;
- (_Bool)scanTileWithPortraitImage:(struct PXTileInfo *)arg1;
- (_Bool)scanTileWithLandscapeImage:(struct PXTileInfo *)arg1;
- (double)valueByRounding:(double)arg1 usingMagneticGuidelines:(_Bool)arg2;
- (_Bool)scanTileWithHorizontalPanorama:(struct PXTileInfo *)arg1;
- (_Bool)scanTile:(struct PXTileInfo *)arg1 type:(long long *)arg2;
- (_Bool)scanTile:(struct PXTileInfo *)arg1 ofType:(long long)arg2;
- (_Bool)scanTileWithSquareImage:(struct PXTileInfo *)arg1;
- (struct CGSize)captionSizeForTileAtIndex:(long long)arg1 proposedSize:(struct CGSize)arg2;
- (void)parsedFrame:(struct CGRect)arg1 type:(long long)arg2 forTileAtIndex:(long long)arg3;
- (_Bool)parseNextTiles;
- (void)parseTiles;
- (_Bool)scanTile:(struct PXTileInfo *)arg1 passingTest:(CDUnknownBlockType)arg2;
- (struct CGSize)likesSizeForTileAtIndex:(long long)arg1 proposedSize:(struct CGSize)arg2;
- (struct CGSize)commentSizeForTileAtIndex:(long long)arg1 commentIndex:(long long)arg2 proposedSize:(struct CGSize)arg3;
- (void)parsedFrame:(struct CGRect)arg1 type:(long long)arg2 forLikesAtIndex:(long long)arg3;
- (void)parsedFrame:(struct CGRect)arg1 type:(long long)arg2 forCommentAtIndex:(long long)arg3;

@end
