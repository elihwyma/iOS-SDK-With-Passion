/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIPSDImageRef.h>

@interface CUIMutablePSDImageRef : CUIPSDImageRef

- (void)setFileURL:(id)arg1;
- (void)addLayer:(id)arg1;
- (id)initWithPixelWidth:(unsigned long long)arg1 pixelHeight:(unsigned long long)arg2;
- (void)addLayoutMetricsChannel:(id)arg1;
- (void)addOrUpdateSlicesWithSliceRects:(id)arg1;
- (struct __CFData *)copyDefaultICCProfileData;
- (unsigned int)psdLayerBlendModeForCGBlendMode:(int)arg1;
- (struct PSDGradient *)newPSDGradientFromCUIPSDGradient:(id)arg1;
- (unsigned int)newUInt32CArray:(unsigned int **)arg1 withNSArray:(id)arg2 prependNumber:(id)arg3 appendNumber:(id)arg4;
- (unsigned int)newSliceRectsArray:(struct PSDRect **)arg1 withSliceRects:(id)arg2;
- (unsigned int)newSliceRectsArray:(struct PSDRect **)arg1 withXCutPositions:(id)arg2 yCutPositions:(id)arg3;
- (_Bool)saveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)insertLayoutMetricsChannel:(id)arg1 atIndex:(unsigned int)arg2;
- (void)deleteLayoutMetricsChannelAtIndex:(unsigned int)arg1;
- (void)insertLayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)deleteLayerAtIndex:(unsigned int)arg1;
- (void)addOrUpdateSlicesWithXCutPositions:(id)arg1 yCutPositions:(id)arg2;
- (void)updateSliceName:(id)arg1 atIndex:(unsigned int)arg2;
- (_Bool)saveToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
