/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CEKBadgeTextView;

@interface CAMShallowDepthOfFieldBadge : UIView

{
    long long _shallowDepthOfFieldStatus;
    CEKBadgeTextView *__enabledTextView;
    CEKBadgeTextView *__disabledTextView;
}

@property (nonatomic, readonly) CEKBadgeTextView *_enabledTextView;
@property (nonatomic, readonly) CEKBadgeTextView *_disabledTextView;
@property (nonatomic) long long shallowDepthOfFieldStatus;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateToContentSize:(id)arg1;
- (void)setShallowDepthOfFieldStatus:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateForShallowDepthOfFieldStatusAnimated:(_Bool)arg1;

@end
