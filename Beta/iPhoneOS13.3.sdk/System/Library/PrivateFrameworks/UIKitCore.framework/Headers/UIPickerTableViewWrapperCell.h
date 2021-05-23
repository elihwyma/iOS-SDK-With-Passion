/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPickerTableViewCell.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell

{
    UIView *_wrappedView;
    UIView *_wrappedViewContainer;
    struct CGSize _wrappedViewSize;
}

@property (retain, nonatomic) UIView *wrappedView;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setIsCenterCell:(_Bool)arg1 shouldModifyAlphaOfView:(_Bool)arg2;
- (void)_updateWrappedViewFrame;
- (void)_updateWrappedView;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (id)_anyDateLabel;

@end
