/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CADisplayLink, UIImage;

__attribute__((visibility("hidden")))
@interface CKBrowserIconView : UIView

{
    double _percentComplete;
    UIImage *_iconImage;
    _Bool _animating;
    double _animationStartTime;
    double _animationStartPercentComplete;
    double _animationEndPercentComplete;
    CADisplayLink *_displayLink;
}

@property (nonatomic) _Bool animating;
@property (nonatomic) double animationStartTime;
@property (nonatomic) double animationStartPercentComplete;
@property (nonatomic) double animationEndPercentComplete;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) double percentComplete;

+ (id)_pieImageForPercentComplete:(double)arg1 size:(struct CGSize)arg2 center:(struct CGPoint)arg3 radius:(double)arg4;

- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setPercentComplete:(double)arg1 animated:(_Bool)arg2;
- (void)_onDisplayLink:(id)arg1;

@end
