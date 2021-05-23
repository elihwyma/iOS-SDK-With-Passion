/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDRep.h>

@interface TSDPartitionedPartialRep : TSDRep

- (void)drawInContext:(struct CGContext *)arg1;
- (void)willBeRemoved;
- (_Bool)directlyManagesLayerContent;
- (void)didUpdateLayer:(id)arg1;
- (struct CGRect)layerFrameInScaledCanvas;
- (struct CGRect)clipRect;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)i_queueForTileProvider;
- (struct UIEdgeInsets)p_edgeInsetsForClipping;
- (struct CGImage *)p_newImageForCachingBaseRep;
- (struct CGRect)p_clipRect;
- (struct CGRect)p_convertBaseToNaturalRect:(struct CGRect)arg1;
- (void)resetCachedPartitionedRendering;

@end
