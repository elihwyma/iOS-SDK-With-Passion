/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CAGradientLayer;

__attribute__((visibility("hidden")))
@interface UIKBASPCoverView : UIView

{
    CAGradientLayer *_gradientLayer;
}

@property (retain, nonatomic) CAGradientLayer *gradientLayer;

+ (id)ASPCoverViewColor;
+ (id)ASPCoverView:(_Bool)arg1 withFrame:(struct CGRect)arg2 isRightToLeft:(_Bool)arg3 withTextWidth:(double)arg4;

- (void)layoutSubviews;
- (id)initCoverViewWithFrame:(struct CGRect)arg1 isRightToLeft:(_Bool)arg2 withTextWidth:(double)arg3;
- (id)initCoverBackgroundViewWithFrame:(struct CGRect)arg1 isRightToLeft:(_Bool)arg2;

@end
