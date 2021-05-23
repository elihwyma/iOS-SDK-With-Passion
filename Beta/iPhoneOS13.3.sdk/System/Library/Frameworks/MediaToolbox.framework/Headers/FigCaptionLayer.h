/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@class FigCaptionLayerPrivate, NSString;

@interface FigCaptionLayer

{
    FigCaptionLayerPrivate *_priv;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setFontName:(const char *)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayers;
- (void)resetCaptions;
- (void)processCaptionCommand:(unsigned int)arg1 data:(id)arg2;
- (void)updateDisplay:(struct OpaqueFigCFCaptionRenderer *)arg1;

@end
