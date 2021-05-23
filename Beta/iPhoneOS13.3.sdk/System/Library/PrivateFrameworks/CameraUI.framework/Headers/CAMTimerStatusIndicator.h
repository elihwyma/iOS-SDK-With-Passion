/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMTimerStatusIndicator : CAMControlStatusIndicator

{
    long long _timerDuration;
}

@property (nonatomic) long long timerDuration;

- (id)valueText;
- (id)imageNameForCurrentState;
- (_Bool)canShowValue;

@end
