/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, VCIDRScheduler;

__attribute__((visibility("hidden")))
@interface VCSessionUplinkVideoStreamController : NSObject

{
    float _startTime;
    float _currentFrameTime;
    id _delegate;
    NSMutableDictionary *_videoStreams;
    NSMutableDictionary *_streamInfoMap;
    NSMutableDictionary *_activeVideoStreams;
    NSMutableSet *_streamToPause;
    NSMutableSet *_streamToResume;
    NSMutableDictionary *_streamScheduleWifi;
    NSMutableDictionary *_streamScheduleCell;
    NSMutableDictionary *_currentStreamSchedule;
    NSDictionary *_pendingVideoStreams;
    VCIDRScheduler *_schedulerWifi;
    VCIDRScheduler *_schedulerCell;
    _Bool _pendingStreamsUpdated;
    struct _opaque_pthread_mutex_t _mutex;
    NSMutableArray *_streamsPendingKeyFrameGeneration;
    NSMutableArray *_streamResetIDR;
    NSArray *_streamIDsWifi;
    NSArray *_streamIDsCell;
    unsigned int _captureFrameRate;
}

@property (readonly) NSMutableDictionary *activeVideoStreams;
@property (copy, nonatomic) NSDictionary *pendingVideoStreams;
@property unsigned int captureFrameRate;
@property (copy, nonatomic) NSArray *streamIDsWifi;
@property (copy, nonatomic) NSArray *streamIDsCell;
@property (nonatomic) float currentFrameTime;

- (void)dealloc;
- (id)delegate;
- (void)lock;
- (void)unlock;
- (void)initilizeStreamInfoMapWithStreamInfos:(id)arg1;
- (id)newVideoStreamKeyFrameScheduleWithStreamIDs:(id)arg1;
- (_Bool)pauseStreams;
- (_Bool)resumeStreams;
- (void)handleStreamsPendingKeyFrameGeneration;
- (void)handleStreamsResetIDR;
- (id)anchorStreamIDWithCappedVideoStreamIDs:(id)arg1;
- (_Bool)shouldGenerateIDRWithStreamSchedule:(id)arg1;
- (id)videoStreamPendingKeyFrameGenerationWithStreamID:(id)arg1 shouldRemoveFromPendingArray:(_Bool *)arg2;
- (id)schedulerStreamWithVideoStream:(id)arg1;
- (id)initWithVideoStreams:(id)arg1 streamInfos:(id)arg2 delegate:(id)arg3;
- (void)setIsLocalOnCellular:(_Bool)arg1 cappedVideoStreamIDs:(id)arg2;
- (void)generateKeyFrameWithStreamID:(unsigned int)arg1;

@end
