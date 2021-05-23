/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <Foundation/NSObject.h>

@class NSDate, UIActivityIndicatorView, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface ICDocCamSpinner : NSObject

{
    NSDate *_showDate;
    UIActivityIndicatorView *_activityIndicator;
    double _minimumDuration;
    UIViewPropertyAnimator *_animator;
}

@property (retain, nonatomic) NSDate *showDate;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) double minimumDuration;
@property (retain, nonatomic) UIViewPropertyAnimator *animator;

- (void)show;
- (void)hide;
- (id)initWithView:(id)arg1 minimumDuration:(double)arg2;

@end
