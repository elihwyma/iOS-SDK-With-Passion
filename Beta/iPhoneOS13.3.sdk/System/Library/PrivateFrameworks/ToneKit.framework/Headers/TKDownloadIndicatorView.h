/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UIView.h>

@class CADisplayLink, CAMediaTimingFunction, NSMutableArray;

@interface TKDownloadIndicatorView : UIView

{
    float _initialAnimatedProgress;
    float _currentAnimatedProgress;
    double _progressAnimationEndTime;
    double _progressAnimationStartTime;
    _Bool _isAnimatingProgress;
    CADisplayLink *_displayLink;
    NSMutableArray *_progressAnimationCompletionHandlers;
    CAMediaTimingFunction *_progressAnimationTimingFunction;
    float _progress;
}

@property (nonatomic) float progress;

+ (struct CGSize)_intrinsicDownloadIndicatorViewSize;

- (id)init;
- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleDisplayLinkDidFire:(id)arg1;
- (void)_stopProgressAnimation;

@end
