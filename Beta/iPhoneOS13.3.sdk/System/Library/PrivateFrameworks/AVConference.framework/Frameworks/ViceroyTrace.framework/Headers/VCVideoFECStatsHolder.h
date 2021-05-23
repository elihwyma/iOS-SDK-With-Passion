/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoFECStatsHolder : NSObject

{
    unsigned long long _totalFECDataByteCount;
    unsigned long long _totalFECParityByteCount;
    unsigned int _totalFECFrameCount;
    unsigned int _completeFECFrameCount;
    unsigned int _failedFECFrameCount;
    unsigned int _unfixableFECFrameCount;
}

@property unsigned long long totalFECDataByteCount;
@property unsigned long long totalFECParityByteCount;
@property unsigned int totalFECFrameCount;
@property unsigned int completeFECFrameCount;
@property unsigned int failedFECFrameCount;
@property unsigned int unfixableFECFrameCount;

- (void)merge:(id)arg1;

@end
