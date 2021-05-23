/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIButton.h>

@class ICTrackedParagraph;

@interface ICTodoButton : UIButton

{
    _Bool _done;
    ICTrackedParagraph *_trackedParagraph;
    struct CGSize _defaultSize;
    struct CGSize _defaultImageSize;
}

@property (nonatomic) struct CGSize defaultImageSize;
@property (nonatomic, getter=isDone) _Bool done;
@property (weak, nonatomic) ICTrackedParagraph *trackedParagraph;
@property (nonatomic) struct CGSize defaultSize;

- (id)init;
- (id)debugDescription;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageFrame;
- (void)updateImagesAnimated:(_Bool)arg1;
- (void)setDone:(_Bool)arg1 animated:(_Bool)arg2;
- (void)trackedParagraphDidChange;
- (struct UIImage *)imageForChecked:(_Bool)arg1 withHighlight:(_Bool)arg2;
- (id)initWithDragDelegate:(id)arg1;
- (void)wasPressed;
- (void)setFrame:(struct CGRect)arg1 leftToRight:(_Bool)arg2;

@end
