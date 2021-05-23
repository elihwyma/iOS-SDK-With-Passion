/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@class UIImageView, _UIBackdropView;

@interface PMHighFidelityVideoOverlayButton : UIView

{
    long long _style;
    _UIBackdropView *_backdropView;
    UIImageView *_overlayPlayBackground;
}

- (long long)style;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 allowBackdropStatisticsSupression:(_Bool)arg2;

@end
