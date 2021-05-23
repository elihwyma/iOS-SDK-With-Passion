/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, PXMagazineGrid, PXMagazineRectArray;

@interface PXMagazineLayoutTileMaker : NSObject

{
    PXMagazineGrid *_tileGrid;
    PXMagazineRectArray *_cachedTileRects;
    NSMutableArray *_allFrames;
    double _lastTileWidthPadding;
    double _maxFrameAspectRatio;
    double _minFrameAspectRatio;
    _Bool _startLastPadding;
    NSMutableArray *_sharedTempArray;
    double *_normalizedWeights;
    _Bool _layoutFromRightToLeft;
    unsigned long long _numberOfColumns;
    double _tileAspectRatio;
    double _height;
    double _interTileSpacing;
    unsigned long long _maxTilesInFrame;
    struct CGSize _referenceSize;
    struct CGSize _defaultTileSize;
}

@property (nonatomic, readonly) struct CGSize referenceSize;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) struct CGSize defaultTileSize;
@property (nonatomic, readonly) double tileAspectRatio;
@property (nonatomic) double interTileSpacing;
@property (nonatomic) unsigned long long maxTilesInFrame;
@property (nonatomic) _Bool layoutFromRightToLeft;

+ (void)printInputs:(id)arg1;
+ (void)printPossibleFrames:(unsigned long long)arg1 cellAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 minAspectRato:(double)arg4;
+ (void)printLayout:(id)arg1 numOfColumns:(unsigned long long)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithReferenceSize:(struct CGSize)arg1 numberOfColumns:(unsigned long long)arg2;
- (double)_aspectRatioOfInput:(id)arg1;
- (unsigned long long)getMagazineRects:(struct PXMagazineRect *)arg1 withInputs:(id)arg2;
- (void)getFrames:(struct CGRect *)arg1 withInputs:(id)arg2;
- (void)_getFrames:(struct CGRect *)arg1 magazineRects:(struct PXMagazineRect *)arg2 withInputs:(id)arg3;
- (double *)_normalizeWeightsByInputs:(id)arg1;
- (void)_setRandomSeedWithInputs:(id)arg1;
- (void)_updateDimensionInfos;
- (void)_resetWithNumberOfAssets:(unsigned long long)arg1;
- (id)_generateTilesWithInputs:(id)arg1;
- (unsigned long long)_numberOfInputsForLastPadding;
- (void)_findNextChunkWithInputs:(id)arg1 fromIndex:(unsigned long long)arg2 outArray:(id)arg3;
- (_Bool)_generateTilesWithInputs:(id)arg1 atIndex:(unsigned long long)arg2 forMaxY:(unsigned long long)arg3 reserveNumberForPadding:(unsigned long long)arg4 outArray:(id)arg5;
- (id)_generateLastTilesWithInputs:(id)arg1 baseIndex:(unsigned long long)arg2 returnFallback:(_Bool)arg3;
- (_Bool)_findNextTileWithInputs:(id)arg1 atIndex:(unsigned long long)arg2 baseIndex:(unsigned long long)arg3 coordinator:(id)arg4;
- (struct CGRect)_frameFromTileFrame:(struct PXMagazineRect)arg1;
- (id)_getAllFramesInOrder;
- (long long)_availableFrames:(id *)arg1 maxReturnCount:(unsigned long long)arg2 forAspectRatio:(double)arg3 weight:(double)arg4 maxWidth:(unsigned long long)arg5;
- (_Bool)checkAndPrintResults:(_Bool)arg1;

@end
