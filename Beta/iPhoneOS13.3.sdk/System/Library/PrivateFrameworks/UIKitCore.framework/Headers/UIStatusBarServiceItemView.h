/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarServiceItemView : UIStatusBarItemView

{
    NSString *_serviceString;
    NSString *_crossfadeString;
    unsigned long long _crossfadeStep;
    double _maxWidth;
    double _serviceWidth;
    double _crossfadeWidth;
    int _contentType;
    _Bool _loopingNecessaryForString;
    _Bool _loopNowIfNecessary;
    _Bool _loopingNow;
    double _letterSpacing;
}

- (id)accessibilityHUDRepresentation;
- (double)standardPadding;
- (long long)legibilityStyle;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (double)updateContentsAndWidth;
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (id)contentsImage;
- (double)extraRightPadding;
- (_Bool)animatesDataChange;
- (void)performPendedActions;
- (double)resetContentOverlap;
- (double)addContentOverlap:(double)arg1;
- (_Bool)updateForContentType:(int)arg1 serviceString:(id)arg2 serviceCrossfadeString:(id)arg3 maxWidth:(double)arg4 actions:(int)arg5;
- (id)_contentsImageFromString:(id)arg1 withWidth:(double)arg2 letterSpacing:(double)arg3;
- (void)_crossfadeStepAnimation;
- (_Bool)_crossfaded;
- (_Bool)_loopingNecessary;
- (id)_crossfadeContentsImage;
- (id)_serviceContentsImage;
- (void)_loopAnimationDidStopInDirection:(_Bool)arg1;

@end
