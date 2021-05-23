/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeedLayoutGenerator.h>

@interface PXVerticalFeedLayoutGenerator : PXFeedLayoutGenerator

{
    struct CGPoint _origin;
    struct PXTileInfo _enqueuedCaptionTileInfo;
    struct PXTileInfo _enqueuedLikesTileInfo;
    struct PXTileInfo _enqueuedCommentsTileInfo;
    _Bool _shouldDisplayCaptionsBelowBatches;
    double _referenceWidth;
}

@property (nonatomic) double referenceWidth;
@property (nonatomic) _Bool shouldDisplayCaptionsBelowBatches;

- (void)willParseTiles;
- (_Bool)_parseTileRequiringFullWidth;
- (_Bool)_parseSpecialSequence;
- (_Bool)_parseSpecialTileTriplet;
- (_Bool)_parseTileTriplet;
- (_Bool)_parseTilePair;
- (_Bool)_parseSingleTile;
- (void)didParseTiles;
- (_Bool)_dequeueCaption;
- (_Bool)_addRowWithContiguousTiles:(struct PXTileInfo *)arg1 count:(long long)arg2;
- (_Bool)_scanTilePair:(struct PXTileInfo *)arg1;
- (_Bool)_scanTileTriplet:(struct PXTileInfo *)arg1;
- (_Bool)_scanTileRequiringFullWidth:(struct PXTileInfo *)arg1;
- (_Bool)_scanTileRequiringNewRow:(struct PXTileInfo *)arg1;
- (_Bool)_hasLeftSuboptimalRow;
- (_Bool)_addRowWithTiles:(struct PXTileInfo *)arg1 imageFrames:(struct CGRect *)arg2 count:(long long)arg3;
- (_Bool)_scanTripletWithLargeLead:(struct PXTileInfo *)arg1;
- (_Bool)_scanTripletWithRearrangment:(struct PXTileInfo *)arg1;
- (_Bool)_parseSpecialSubsequenceWithRowRequired:(_Bool)arg1 rowParsed:(_Bool *)arg2;
- (_Bool)_scanSpecialSequenceBlock:(struct PXTileInfo *)arg1;
- (_Bool)_scanSpecialSequenceRow:(struct PXTileInfo *)arg1 count:(long long *)arg2;
- (_Bool)_addSpecialSequenceBlock:(struct PXTileInfo *)arg1;
- (_Bool)_scanNonPanoramaSequence:(struct PXTileInfo *)arg1 count:(long long)arg2;
- (_Bool)_isAtEndOfRow;
- (_Bool)_hasEnqueuedCaption;
- (void)_enumerateRowFramesWithContiguousTiles:(struct PXTileInfo *)arg1 count:(long long)arg2 useMagneticGuidelines:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)_enqueueCaptionWithTileInfo:(struct PXTileInfo)arg1;
- (_Bool)parseNextTiles;
- (double)referenceDistanceForMagneticGuidelines;
- (void)_enqueueLikesWithTileInfo:(struct PXTileInfo)arg1;
- (_Bool)_hasEnqueuedLikes;
- (_Bool)_dequeueLikes;
- (void)_enqueueCommentsWithTileInfo:(struct PXTileInfo)arg1;
- (_Bool)_hasEnqueuedComments;
- (_Bool)_dequeueComments;
- (void)_willAddCaptionRowWithFirstTileInfo:(struct PXTileInfo)arg1;
- (void)_willAddLikeRowWithFirstTileInfo:(struct PXTileInfo)arg1;
- (void)_willAddCommentRowsWithFirstTileInfo:(struct PXTileInfo)arg1;

@end
