/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreUI/CUIPSDImageRef.h>

@class NSArray;

@interface CTDPSDPreviewRef : CUIPSDImageRef

{
    struct _PSDImageInfo _imageInfo;
    long long _layerCount;
    long long _sliceCount;
    long long _columnWidth;
    long long _rowHeight;
    NSArray *_layerIndexLayout;
    long long _sliceRowCount;
    long long _sliceColumnCount;
    NSArray *_sliceRects;
}

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (_Bool)hasGradient;
- (long long)sliceRowCount;
- (long long)sliceColumnCount;
- (void)evaluateSliceGrid;
- (_Bool)hasRegularSliceGrid;
- (long long)numberOfGradientLayers;
- (long long)numberOfAlphaChannels;
- (long long)indexOfDrawingLayerType:(long long)arg1;

@end
