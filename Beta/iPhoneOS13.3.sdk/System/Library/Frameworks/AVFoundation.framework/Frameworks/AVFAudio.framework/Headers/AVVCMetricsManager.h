/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class CAReporter, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AVVCMetricsManager : NSObject

{
    CAReporter *mMetricsReporter;
    long long mAudioIssueDetector;
    unsigned long long mAudioDataAnalysisSiriSession;
    unsigned long long _voiceTriggerStartHostTime;
    unsigned long long _callToStartRecordHostTime;
    NSMutableDictionary *_publicMetrics;
    NSMutableDictionary *_avvcProfilingInfoDictionary;
}

@property (retain) NSMutableDictionary *publicMetrics;
@property (retain) NSMutableDictionary *avvcProfilingInfoDictionary;
@property (nonatomic) unsigned long long voiceTriggerStartHostTime;
@property (nonatomic) unsigned long long callToStartRecordHostTime;

+ (id)sharedManager;
+ (struct CAMutex *)getLock;
+ (void)createSharedManager;
+ (void)destroySharedManager;

- (id)init;
- (void)dealloc;
- (void)updateWithReporterID:(long long)arg1;
- (void)checkAndUpdateReporterID;
- (id)retrieveMetrics;
- (id)getStringDate:(id)arg1;
- (void)resetProfileMetrics;
- (id)retrieveProfileMetrics;
- (_Bool)measureElapseTimeForMetric:(id)arg1 block:(CDUnknownBlockType)arg2;
- (int)setAudioIssueDetectorFormat:(struct CAStreamBasicDescription)arg1 numFrames:(unsigned int)arg2;
- (int)audioIssueDetectorAnalyzeBuffer:(struct AudioBufferList)arg1 numFrames:(unsigned int)arg2 timeStamp:(const struct AudioTimeStamp *)arg3;
- (int)resetAudioIssueDetector;
- (void)logSessionMetric:(id)arg1 value:(id)arg2 category:(unsigned int)arg3 type:(unsigned short)arg4;
- (void)logSessionMetric:(id)arg1 value:(id)arg2 category:(unsigned int)arg3 type:(unsigned short)arg4 context:(id)arg5;
- (void)logSingleMetric:(id)arg1 value:(id)arg2 category:(unsigned int)arg3 type:(unsigned short)arg4;
- (void)logRecordAudioFormat:(struct CAStreamBasicDescription)arg1;
- (void)logRecordRoute:(id)arg1 andPlaybackRoute:(id)arg2;
- (void)logProfileMetrics:(id)arg1;

@end
