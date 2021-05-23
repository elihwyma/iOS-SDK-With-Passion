/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSString, _PXEditableNavigationTitleTextField;

@protocol PXEditableNavigationTitleViewDelegate;

@interface PXEditableNavigationTitleView : UIView

{
    struct {
        _Bool textColor;
    } _needsUpdateFlags;
    _Bool _isPerformingUpdates;
    struct {
        _Bool validateNewText;
        _Bool didEndEditing;
    } _delegateRespondsTo;
    _Bool _editing;
    id <PXEditableNavigationTitleViewDelegate> _delegate;
    NSString *_text;
    _PXEditableNavigationTitleTextField *_textField;
}

@property (nonatomic, readonly) _PXEditableNavigationTitleTextField *textField;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (weak, nonatomic) id <PXEditableNavigationTitleViewDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)endEditing;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_textFieldTextDidChange:(id)arg1;
- (void)_updateIfNeeded;
- (void)_invalidateTextColor;
- (void)_updateTextColorIfNeeded;

@end
