/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/GKSPerformance.framework/GKSPerformance
 */

#import <Foundation/NSObject.h>

@class AudioTier, NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AudioTierHistogram : NSObject

{
    NSMutableDictionary *histogram;
    AudioTier *currentTier;
    double startTime;
    NSObject<OS_dispatch_queue> *awdAudioTierQueue;
}

- (id)init;
- (void)dealloc;
- (void)end;
- (id)newReport;
- (void)newAudioTier:(unsigned int)arg1 duplication:(unsigned int)arg2 bundling:(unsigned int)arg3 codecPayload:(unsigned int)arg4 codecBitrate:(unsigned int)arg5 mode:(unsigned int)arg6;
- (void)accumulateTime:(double)arg1 forAudioTier:(id)arg2;

@end
