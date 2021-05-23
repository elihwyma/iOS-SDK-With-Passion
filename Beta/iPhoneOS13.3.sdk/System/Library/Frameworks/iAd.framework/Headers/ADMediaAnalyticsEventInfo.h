/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@interface ADMediaAnalyticsEventInfo : NSObject

{
    double _totalDuration;
    double _currentPlaybackTime;
    double _visiblePercentage;
    double _volume;
}

@property (nonatomic) double totalDuration;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) double visiblePercentage;
@property (nonatomic) double volume;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
