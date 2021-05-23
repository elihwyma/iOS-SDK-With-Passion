/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDNoDefaultImplicitActionLayer.h>

@interface TSDTilingTileLayer : TSDNoDefaultImplicitActionLayer

{
    unsigned long long mIndex;
    _Bool mNeedsTileDisplay;
    CDStruct_73b5d383 mLocation;
}

@property (nonatomic) unsigned long long index;
@property (nonatomic) _Bool needsTileDisplay;
@property (nonatomic) CDStruct_73b5d383 location;

- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)display;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setNeedsLayoutForTilingLayers;
- (void)updateFrameWithTileSize:(struct CGSize)arg1 tilesWide:(unsigned long long)arg2 tilesHigh:(unsigned long long)arg3 geometryProvider:(id)arg4;
- (void)setNeedsDisplayInRectIgnoringBackground:(struct CGRect)arg1;
- (id)tileContentsLayer;

@end
