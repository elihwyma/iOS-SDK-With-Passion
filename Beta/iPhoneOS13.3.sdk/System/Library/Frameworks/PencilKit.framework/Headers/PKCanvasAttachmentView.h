/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKAttachmentView.h>

@class NSMutableArray, PKCanvasView;

@interface PKCanvasAttachmentView : PKAttachmentView

{
    _Bool __wantsFullyRenderedNotification;
    PKCanvasView *_canvasView;
    double _drawingWidth;
    NSMutableArray *_fullyRenderedCompletionBlocks;
}

@property (weak, nonatomic) PKCanvasView *canvasView;
@property (nonatomic) _Bool _wantsFullyRenderedNotification;
@property (nonatomic) double drawingWidth;
@property (retain, nonatomic) NSMutableArray *fullyRenderedCompletionBlocks;

- (double)drawingScale;
- (void)drawingDidChange;
- (_Bool)wantsFullyRendered;
- (void)fullyRendered;
- (_Bool)disableTileAnimations;

@end
