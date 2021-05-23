/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebCore/WAKView.h>

@class NSMutableArray, WebNodeHighlight;

__attribute__((visibility("hidden")))
@interface WebNodeHighlightView : WAKView

{
    WebNodeHighlight *_webNodeHighlight;
    NSMutableArray *_layers;
}

- (void)dealloc;
- (_Bool)isFlipped;
- (void)_removeAllLayers;
- (void)layoutSublayers:(id)arg1;
- (id)initWithWebNodeHighlight:(id)arg1;
- (void)detachFromWebNodeHighlight;
- (void)_attach:(id)arg1 numLayers:(unsigned long long)arg2;
- (void)_layoutForNodeHighlight:(struct Highlight *)arg1 parent:(id)arg2;
- (void)_layoutForRectsHighlight:(struct Highlight *)arg1 parent:(id)arg2;
- (id)webNodeHighlight;

@end
