/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIPSDLayerBaseRef.h>

@interface CUIPSDLayerRef : CUIPSDLayerBaseRef

- (id)image;
- (id)gradient;
- (id)initWithImageRef:(id)arg1 layerIndex:(unsigned int)arg2;
- (struct CGImage *)createCGImage;
- (id)imageIsZeroSizeImage:(_Bool *)arg1;
- (id)imageFromSlice:(unsigned int)arg1;
- (id)imageFromSlice:(unsigned int)arg1 isEmptyImage:(_Bool *)arg2;
- (id)patternFromSlice:(unsigned int)arg1;
- (id)patternFromSlice:(unsigned int)arg1 isZeroSizeImage:(_Bool *)arg2;
- (id)maskFromSlice:(unsigned int)arg1;
- (id)fillSample;
- (id)layerEffects;
- (id)colorFill;

@end
