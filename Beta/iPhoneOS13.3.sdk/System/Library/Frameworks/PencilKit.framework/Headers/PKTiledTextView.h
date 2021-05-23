/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKTiledView.h>

@class PKAttachmentView, UIButton;

@interface PKTiledTextView : PKTiledView

{
    PKAttachmentView *_standInEndAttachmentView;
    UIButton *_tapToRadarButton;
}

@property (retain, nonatomic) PKAttachmentView *standInEndAttachmentView;
@property (retain, nonatomic) UIButton *tapToRadarButton;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)textDidChange:(id)arg1;
- (void)_layoutSubviews;
- (void)canvasViewDidEndDrawing:(id)arg1;
- (void)setLinedPaper:(id)arg1;
- (id)standInAttachmentView;
- (void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2;
- (_Bool)canAddStroke;
- (_Bool)insertAttachmentIfInBlankSpace:(struct CGPoint)arg1;
- (_Bool)_shouldUpdateHeightOfAttachments;
- (id)initInScrollView:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)_setupTapToRadarButton;
- (void)updateEndAttachment;
- (_Bool)hasEndAttachment;
- (struct CGRect)frameOfEndAttachment;
- (void)_tapToRadarButtonTapped:(id)arg1;
- (id)saveTempData:(id)arg1 name:(id)arg2;
- (void)appendPath:(id)arg1 attachmentString:(id)arg2;

@end
