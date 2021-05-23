/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@class NSString;

__attribute__((visibility("hidden")))
@interface FigSubtitleWebVTTCueCALayer

{
    struct OpaqueFigSubtitleWebVTTCueCALayerInternal *layerInternal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (unsigned char)isDirty;
- (void)setDefaultFontSize:(double)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setContent:(struct __CFAttributedString *)arg1;
- (void)setViewport:(struct CGRect)arg1;
- (struct CGRect)getSuggestedBounds:(unsigned char)arg1;
- (void)setCuePosition:(struct CGPoint)arg1;
- (struct __CFString *)getContentID;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;

@end
