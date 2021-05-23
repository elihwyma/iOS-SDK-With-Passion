/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTiledLayoutGenerator.h>

__attribute__((visibility("hidden")))
@interface CKVerticalTiledLayoutGenerator : CKTiledLayoutGenerator

{
    struct CGPoint _origin;
    CDStruct_1417b155 _enqueuedCaptionTileInfo;
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
- (_Bool)_addRowWithContiguousTiles:(CDStruct_1417b155 *)arg1 count:(long long)arg2;
- (_Bool)_scanTilePair:(CDStruct_1417b155 *)arg1;
- (_Bool)_scanTileTriplet:(CDStruct_1417b155 *)arg1;
- (_Bool)_scanTileRequiringFullWidth:(CDStruct_1417b155 *)arg1;
- (_Bool)_scanTileRequiringNewRow:(CDStruct_1417b155 *)arg1;
- (_Bool)_hasLeftSuboptimalRow;
- (_Bool)_addRowWithTiles:(CDStruct_1417b155 *)arg1 imageFrames:(struct CGRect *)arg2 count:(long long)arg3;
- (_Bool)_scanTripletWithLargeLead:(CDStruct_1417b155 *)arg1;
- (_Bool)_scanTripletWithRearrangment:(CDStruct_1417b155 *)arg1;
- (_Bool)_parseSpecialSubsequenceWithRowRequired:(_Bool)arg1 rowParsed:(_Bool *)arg2;
- (_Bool)_scanSpecialSequenceBlock:(CDStruct_1417b155 *)arg1;
- (_Bool)_scanSpecialSequenceRow:(CDStruct_1417b155 *)arg1 count:(long long *)arg2;
- (_Bool)_addSpecialSequenceBlock:(CDStruct_1417b155 *)arg1;
- (_Bool)_scanNonPanoramaSequence:(CDStruct_1417b155 *)arg1 count:(long long)arg2;
- (_Bool)_isAtEndOfRow;
- (_Bool)_hasEnqueuedCaption;
- (void)_enumerateRowFramesWithContiguousTiles:(CDStruct_1417b155 *)arg1 count:(long long)arg2 useMagneticGuidelines:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)_willAddRowWithFirstTileInfo:(CDStruct_1417b155)arg1;
- (void)_enqueueCaptionWithTileInfo:(CDStruct_1417b155)arg1;
- (_Bool)parseNextTiles;
- (double)referenceDistanceForMagneticGuidelines;

@end
