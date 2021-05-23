/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UITextView.h>

@class PKInk, PKLinedPaper, PKTool, UIImage;

@protocol UITextViewDrawingDelegate;

@interface UITextView (UITextViewDrawing)

@property (nonatomic, getter=isStylusDrawingEnabled) _Bool stylusDrawingEnabled;
@property (retain, nonatomic) UIImage *paperTexture;
@property (nonatomic, getter=isFingerDrawingEnabled) _Bool fingerDrawingEnabled;
@property (nonatomic, getter=isRulerEnabled) _Bool rulerEnabled;
@property (copy, nonatomic) PKInk *ink;
@property (copy, nonatomic, setter=_setTool:) PKTool *_tool;
@property (copy, nonatomic) PKLinedPaper *linedPaper;
@property (weak, nonatomic) id <UITextViewDrawingDelegate> drawingDelegate;

- (void)_insertDrawing:(id)arg1;
- (_Bool)_canInsertDrawing;
- (_Bool)_canAddStroke;
- (void)_willBeginNewStrokeForTouch:(id)arg1;
- (void)_didEndStroke;
- (id)_insertEmptyDrawingAttachmentAtLocation:(long long)arg1;
- (id)_pkTiledView;
- (void)_removeDrawingAttachment:(id)arg1 withView:(id)arg2 forDeletion:(_Bool)arg3;
- (void)_undoDrawingBounds:(struct CGRect)arg1 viewBounds:(struct CGRect)arg2 ofAttachmentUUID:(id)arg3;
- (_Bool)_canSelectDrawing;
- (void)_growView:(id)arg1 textAttachment:(id)arg2 atCharacterIndex:(long long)arg3 step:(double)arg4 stop:(CDUnknownBlockType)arg5;
- (void)_insertDrawingWithTap:(id)arg1;
- (id)_drawingInfo;
- (void)_clearDrawingInfo;
- (_Bool)_canAddDrawingAtIndex:(unsigned long long)arg1;
- (_Bool)_canInsertDrawingInRange:(struct _NSRange)arg1;
- (void)_setSelectedInkColor:(id)arg1;
- (id)_textRangeFromRange:(struct _NSRange)arg1;

@end
