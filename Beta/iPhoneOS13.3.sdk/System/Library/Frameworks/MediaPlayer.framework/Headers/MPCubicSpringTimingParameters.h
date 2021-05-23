/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UISpringTimingParameters.h>

@class UICubicTimingParameters;

@interface MPCubicSpringTimingParameters : UISpringTimingParameters

{
    UICubicTimingParameters *_springCubicTimingParameters;
}

@property (copy, nonatomic) UICubicTimingParameters *springCubicTimingParameters;

+ (id)standardTimingParameters;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cubicTimingParameters;

@end
