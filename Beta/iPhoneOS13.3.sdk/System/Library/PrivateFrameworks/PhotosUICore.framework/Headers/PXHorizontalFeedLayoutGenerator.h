/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeedLayoutGenerator.h>

@interface PXHorizontalFeedLayoutGenerator : PXFeedLayoutGenerator

{
    struct CGPoint _origin;
    double _referenceHeight;
}

@property (nonatomic) double referenceHeight;

- (void)willParseTiles;
- (_Bool)_parseSpecialSequence;
- (_Bool)_parseSpecialTileTriplet;
- (_Bool)_parseTileTriplet;
- (_Bool)_parseTilePair;
- (_Bool)_parseSingleTile;
- (_Bool)_scanTripletWithLargeLead:(struct PXTileInfo *)arg1;
- (_Bool)_scanSpecialSequenceBlock:(struct PXTileInfo *)arg1;
- (_Bool)_addSpecialSequenceBlock:(struct PXTileInfo *)arg1;
- (_Bool)_scanNonPanoramaSequence:(struct PXTileInfo *)arg1 count:(long long)arg2;
- (_Bool)parseNextTiles;
- (double)referenceDistanceForMagneticGuidelines;
- (_Bool)_addColumnWithTiles:(struct PXTileInfo *)arg1 imageFrames:(struct CGRect *)arg2 count:(long long)arg3;
- (_Bool)_addColumnWithContiguousTiles:(struct PXTileInfo *)arg1 count:(long long)arg2;
- (_Bool)_hasLeftSuboptimalColumn;
- (_Bool)_parseSpecialSubsequenceWithColumnRequired:(_Bool)arg1 columnParsed:(_Bool *)arg2;
- (_Bool)_scanSpecialSequenceColumn:(struct PXTileInfo *)arg1 count:(long long *)arg2;
- (_Bool)_isAtEndOfColumn;
- (void)_enumerateColumnFramesWithContiguousTiles:(struct PXTileInfo *)arg1 count:(long long)arg2 useMagneticGuidelines:(_Bool)arg3 block:(CDUnknownBlockType)arg4;

@end
