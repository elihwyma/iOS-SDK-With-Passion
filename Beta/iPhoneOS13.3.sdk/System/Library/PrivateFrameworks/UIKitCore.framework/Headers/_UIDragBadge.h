/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface _UIDragBadge : UIView

{
    UILabel *_label;
    UIImageView *_imageView;
    long long _style;
    long long _itemCount;
}

@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic, readonly) UIImageView *_imageView;
@property (nonatomic) long long style;
@property (nonatomic) long long itemCount;
@property (nonatomic, readonly) struct CGPoint anchorPointForAlignment;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_updateForStyle;
- (void)_updateLabelTextFromItemCount;

@end
