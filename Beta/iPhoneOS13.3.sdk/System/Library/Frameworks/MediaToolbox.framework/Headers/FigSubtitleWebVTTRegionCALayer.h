/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

__attribute__((visibility("hidden")))
@interface FigSubtitleWebVTTRegionCALayer

{
    struct OpaqueFigSubtitleWebVTTRegionCALayerInternal *layerInternal;
}

- (id)init;
- (void)dealloc;
- (void)setNeedsDisplay;
- (void)setContent:(struct __CFDictionary *)arg1;
- (void)layoutSublayers;
- (void)setViewport:(struct CGRect)arg1;
- (struct __CFString *)getContentID;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;
- (void)setReLayout;
- (void)handleNeedsLayoutNotification;

@end
