/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface CAMFocusIndicatorRectView : UIView

{
    long long _style;
    UIImageView *__imageView;
}

@property (nonatomic, readonly) UIImageView *_imageView;
@property (nonatomic, readonly) long long style;
@property (nonatomic, getter=isInactive) _Bool inactive;
@property (nonatomic, getter=isPulsing) _Bool pulsing;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;

@end
