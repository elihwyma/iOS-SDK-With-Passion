/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@interface SVVideoControlsTimingConfiguration : NSObject

{
    double _upNextAppearanceTimeInterval;
    double _nowPlayingVisibilityTimeInterval;
    double _moreFromVisibilityTimeInterval;
}

@property (nonatomic, readonly) double upNextAppearanceTimeInterval;
@property (nonatomic, readonly) double nowPlayingVisibilityTimeInterval;
@property (nonatomic, readonly) double moreFromVisibilityTimeInterval;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUpNextAppearanceTimeInterval:(double)arg1 nowPlayingVisibilityTimeInterval:(double)arg2 moreFromVisibilityTimeInterval:(double)arg3;

@end
