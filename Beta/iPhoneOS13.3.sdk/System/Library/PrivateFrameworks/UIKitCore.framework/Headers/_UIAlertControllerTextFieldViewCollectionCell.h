/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewCell.h>

@class UITapGestureRecognizer, _UIAlertControllerTextFieldView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextFieldViewCollectionCell : UICollectionViewCell

{
    _UIAlertControllerTextFieldView *_textField;
    UITapGestureRecognizer *_selectButtonGesture;
}

@property (nonatomic, readonly) _UIAlertControllerTextFieldView *textField;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)preferredFocusedView;
- (void)_selectButton:(id)arg1;
- (void)setTextField:(id)arg1 horizontalMargin:(double)arg2;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;

@end
