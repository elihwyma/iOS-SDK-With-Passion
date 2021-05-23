/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction, LPImageViewStyle, LPPadding, LPVideoPlayButtonStyle, UIColor;

__attribute__((visibility("hidden")))
@interface LPVideoViewStyle : NSObject

{
    LPVideoPlayButtonStyle *_playButton;
    LPImageViewStyle *_muteButton;
    LPPadding *_muteButtonPadding;
    double _muteButtonOpacity;
    double _muteButtonHighlightedOpacity;
    UIColor *_pulsingLoadIndicatorColor;
    double _pulsingLoadIndicatorMaximumOpacity;
    double _pulsingLoadIndicatorDuration;
    CAMediaTimingFunction *_pulsingLoadIndicatorTimingFunction;
}

@property (nonatomic, readonly) LPVideoPlayButtonStyle *playButton;
@property (nonatomic, readonly) LPImageViewStyle *muteButton;
@property (retain, nonatomic, readonly) LPPadding *muteButtonPadding;
@property (nonatomic) double muteButtonOpacity;
@property (nonatomic) double muteButtonHighlightedOpacity;
@property (retain, nonatomic) UIColor *pulsingLoadIndicatorColor;
@property (nonatomic) double pulsingLoadIndicatorMaximumOpacity;
@property (nonatomic) double pulsingLoadIndicatorDuration;
@property (retain, nonatomic) CAMediaTimingFunction *pulsingLoadIndicatorTimingFunction;

- (id)init;

@end
