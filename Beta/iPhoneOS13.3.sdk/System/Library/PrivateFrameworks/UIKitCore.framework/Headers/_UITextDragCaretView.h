/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CAShapeLayer;

@protocol UITextInput;

@interface _UITextDragCaretView : UIView

{
    UIView<UITextInput> *_view;
    CAShapeLayer *_mask;
    _Bool _rangesExcludeSelection;
}

@property (nonatomic) _Bool rangesExcludeSelection;

- (void)remove;
- (void)_performUpdate:(id)arg1;
- (id)initWithTextInputView:(id)arg1;
- (void)insertAtRange:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(_Bool)arg4;
- (void)updateToRange:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(_Bool)arg4;
- (void)removeWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 animated:(_Bool)arg3;
- (void)_insertAtRangeOrPosition:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(_Bool)arg4;
- (id)_caretColor;
- (id)_rangeColor;
- (id)_rectsForRange:(id)arg1;
- (id)_maskForRects:(id)arg1;
- (struct CGRect)_configureMask:(id)arg1 withPath:(id)arg2;
- (void)_updateToRangeOrPosition:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(_Bool)arg4;
- (_Bool)_isRemoveAnimatesBackToCaret;
- (void)insertAtPosition:(id)arg1;
- (void)insertAtPosition:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertAtRange:(id)arg1;
- (void)insertAtRange:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateToPosition:(id)arg1;
- (void)updateToPosition:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateToRange:(id)arg1;
- (void)updateToRange:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
