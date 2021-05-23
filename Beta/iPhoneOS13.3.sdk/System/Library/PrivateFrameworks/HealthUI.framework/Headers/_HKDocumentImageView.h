/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface _HKDocumentImageView : UIView

{
    UIImageView *_imageView;
    struct UIEdgeInsets _margins;
}

@property (nonatomic) struct UIEdgeInsets margins;
@property (nonatomic, readonly) UIImageView *imageView;

- (id)initWithImage:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end
