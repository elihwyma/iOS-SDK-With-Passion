/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

__attribute__((visibility("hidden")))
@interface FigCDSCALayer

{
    struct OpaqueFigCDSCALayerInternal *layerInternal;
}

- (id)init;
- (void)dealloc;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)clear:(struct CGRect)arg1;
- (void)layoutSublayers;
- (void)setVideoBounds:(struct CGRect)arg1;
- (void)setCallbacks:(id)arg1 userEvent:(CDUnknownFunctionPointerType)arg2 viewportChanged:(CDUnknownFunctionPointerType)arg3 drawInContext:(CDUnknownFunctionPointerType)arg4;

@end
