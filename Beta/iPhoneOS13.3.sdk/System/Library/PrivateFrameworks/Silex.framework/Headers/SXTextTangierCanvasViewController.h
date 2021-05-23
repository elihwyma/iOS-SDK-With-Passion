/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSWPiOSCanvasViewController.h>

@interface SXTextTangierCanvasViewController : TSWPiOSCanvasViewController

{
    _Bool _selectionEnabled;
}

@property (nonatomic) _Bool selectionEnabled;

- (void)dealloc;
- (void)loadView;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)selectAll:(id)arg1;
- (void)interactionDidEnd:(id)arg1;
- (_Bool)interactionShouldBegin:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3;

@end
