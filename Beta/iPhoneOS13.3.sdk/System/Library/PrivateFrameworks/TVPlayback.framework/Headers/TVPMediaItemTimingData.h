/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TVPMediaItemTimingData : NSObject

{
    _Bool _initialLoadingComplete;
    double _startTimeForPreparingForLoading;
    double _endTimeForPreparingForLoading;
    double _startTimeForLoadingAVAssetKeys;
    double _endTimeForLoadingAVAssetKeys;
    double _startTimeForPreparingForPlaybackInitiation;
    double _endTimeForPreparingForPlaybackInitiation;
    double _startTimeForAVPlayerItemLoading;
    double _endTimeForAVPlayerItemLoading;
    double _startTimeForBuffering;
    double _endTimeForBuffering;
    double _totalInitialLoadingTime;
}

@property (nonatomic) double totalInitialLoadingTime;
@property (nonatomic) double startTimeForPreparingForLoading;
@property (nonatomic) double endTimeForPreparingForLoading;
@property (nonatomic) double startTimeForLoadingAVAssetKeys;
@property (nonatomic) double endTimeForLoadingAVAssetKeys;
@property (nonatomic) double startTimeForPreparingForPlaybackInitiation;
@property (nonatomic) double endTimeForPreparingForPlaybackInitiation;
@property (nonatomic) double startTimeForAVPlayerItemLoading;
@property (nonatomic) double endTimeForAVPlayerItemLoading;
@property (nonatomic) double startTimeForBuffering;
@property (nonatomic) double endTimeForBuffering;
@property (nonatomic) _Bool initialLoadingComplete;

@end
