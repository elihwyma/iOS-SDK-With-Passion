/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTiledLayoutGenerator.h>

__attribute__((visibility("hidden")))
@interface CKHorizontalTiledLayoutGenerator : CKTiledLayoutGenerator

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
- (_Bool)_scanTripletWithLargeLead:(CDStruct_1417b155 *)arg1;
- (_Bool)_scanSpecialSequenceBlock:(CDStruct_1417b155 *)arg1;
- (_Bool)_addSpecialSequenceBlock:(CDStruct_1417b155 *)arg1;
- (_Bool)_scanNonPanoramaSequence:(CDStruct_1417b155 *)arg1 count:(long long)arg2;
- (_Bool)parseNextTiles;
- (double)referenceDistanceForMagneticGuidelines;
- (_Bool)_addColumnWithTiles:(CDStruct_1417b155 *)arg1 imageFrames:(struct CGRect *)arg2 count:(long long)arg3;
- (_Bool)_addColumnWithContiguousTiles:(CDStruct_1417b155 *)arg1 count:(long long)arg2;
- (_Bool)_hasLeftSuboptimalColumn;
- (_Bool)_parseSpecialSubsequenceWithColumnRequired:(_Bool)arg1 columnParsed:(_Bool *)arg2;
- (_Bool)_scanSpecialSequenceColumn:(CDStruct_1417b155 *)arg1 count:(long long *)arg2;
- (_Bool)_isAtEndOfColumn;
- (void)_enumerateColumnFramesWithContiguousTiles:(CDStruct_1417b155 *)arg1 count:(long long)arg2 useMagneticGuidelines:(_Bool)arg3 block:(CDUnknownBlockType)arg4;

@end
