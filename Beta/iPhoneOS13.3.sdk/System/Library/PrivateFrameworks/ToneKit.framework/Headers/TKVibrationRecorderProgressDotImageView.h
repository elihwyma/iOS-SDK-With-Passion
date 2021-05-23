/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UIImageView.h>

@interface TKVibrationRecorderProgressDotImageView : UIImageView

{
    double _timeInterval;
    double _duration;
    double _previousPauseTimeInterval;
    double _previousPauseDuration;
    double _accessibilityFrameAdditionalHeight;
}

@property (nonatomic) double timeInterval;
@property (nonatomic) double duration;
@property (nonatomic) double previousPauseTimeInterval;
@property (nonatomic) double previousPauseDuration;
@property (nonatomic) double accessibilityFrameAdditionalHeight;

- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;

@end
