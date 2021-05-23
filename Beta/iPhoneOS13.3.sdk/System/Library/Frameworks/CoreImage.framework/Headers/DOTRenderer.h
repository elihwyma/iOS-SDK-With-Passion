/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface DOTRenderer : NSObject

{
    struct __sFILE *file;
    NSURL *fileURL;
    NSString *fileTitle;
    _Bool drawEdgesFirst;
    int direction;
    struct CGSize separation;
}

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
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)drawNode:(id)arg1;
- (void)drawEdge:(id)arg1 withPath:(id)arg2;
- (void)setFileTitle:(id)arg1;
- (void)flushRender;
- (void)setDirection:(int)arg1;
- (void)setSeparation:(struct CGSize)arg1;
- (void)setDrawEdgesFirst:(_Bool)arg1;

@end
