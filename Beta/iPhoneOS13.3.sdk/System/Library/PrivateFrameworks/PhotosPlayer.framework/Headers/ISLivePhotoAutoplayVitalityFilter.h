/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISLivePhotoVitalityFilter.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface ISLivePhotoAutoplayVitalityFilter : ISLivePhotoVitalityFilter

{
    _Bool _isVisible;
    _Bool _hasTargetVisibilityOffset;
    _Bool _isScrolling;
    _Bool _isDecelerating;
    double _visibilityOffset;
    double _targetVisibilityOffset;
    NSDate *_estimatedScrollEndDate;
    long long __state;
}

@property (nonatomic, setter=_setState:) long long _state;
@property (nonatomic, setter=setVisible:) _Bool isVisible;
@property (nonatomic) double visibilityOffset;
@property (nonatomic) _Bool hasTargetVisibilityOffset;
@property (nonatomic) double targetVisibilityOffset;
@property (retain, nonatomic) NSDate *estimatedScrollEndDate;
@property (nonatomic, setter=setScrolling:) _Bool isScrolling;
@property (nonatomic, setter=setDecelerating:) _Bool isDecelerating;

- (void)updateOutput;
- (void)_startAutoplay;

@end
