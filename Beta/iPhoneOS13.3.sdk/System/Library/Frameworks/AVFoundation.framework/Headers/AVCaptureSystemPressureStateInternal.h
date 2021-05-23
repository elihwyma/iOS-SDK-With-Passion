/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVFrameRateRange;

__attribute__((visibility("hidden")))
@interface AVCaptureSystemPressureStateInternal : NSObject

{
    int _figLevel;
    unsigned long long _factors;
    AVFrameRateRange *_recommendedFrameRateRangeForPortrait;
}

@property (readonly) int figLevel;
@property (readonly) unsigned long long factors;
@property (readonly) AVFrameRateRange *recommendedFrameRateRangeForPortrait;

- (void)dealloc;
- (id)initWithFigLevel:(int)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3;

@end
