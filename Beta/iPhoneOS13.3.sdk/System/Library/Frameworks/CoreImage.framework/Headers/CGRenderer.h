/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CGRenderer : NSObject

{
    struct CGContext *context;
    _Bool drawEdgesFirst;
    _Bool drawWithSplines;
    int direction;
    struct CGSize separation;
}

@property _Bool drawWithSplines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) int direction;
@property (readonly) struct CGSize separation;
@property (readonly) _Bool drawEdgesFirst;

- (id)init;
- (void)dealloc;
- (void)setFileURL:(id)arg1;
- (struct CGColor *)_colorForNodeColor:(int)arg1;
- (void)_drawNodeContent:(id)arg1;
- (void)_drawNodeBadge:(id)arg1;
- (void)_drawCubicSpline:(id)arg1;
- (void)_drawPolyline:(id)arg1;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)drawNode:(id)arg1;
- (void)drawEdge:(id)arg1 withPath:(id)arg2;
- (void)setFileTitle:(id)arg1;
- (void)flushRender;
- (void)setDirection:(int)arg1;
- (void)setSeparation:(struct CGSize)arg1;
- (void)setDrawEdgesFirst:(_Bool)arg1;

@end
