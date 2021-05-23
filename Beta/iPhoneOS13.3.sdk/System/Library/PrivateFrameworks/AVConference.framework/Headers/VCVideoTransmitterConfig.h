/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCStatisticsCollector, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCVideoTransmitterConfig : NSObject

{
    long long _videoResolution;
    int _videoSource;
    long long _codecType;
    struct opaqueRTCReporting *_reportingAgent;
    int _reportingParentID;
    unsigned long long _framerate;
    unsigned long long _txMaxBitrate;
    unsigned long long _txMinBitrate;
    unsigned long long _keyFrameInterval;
    unsigned long long _recommendedMTU;
    unsigned long long _cvoExtensionID;
    _Bool _enableCVO;
    int _videoPayload;
    int _encodingMode;
    _Atomic unsigned char *_videoPriorityPointer;
    unsigned long long _customWidth;
    unsigned long long _customHeight;
    int _mode;
    AVCStatisticsCollector *_statisticsCollector;
    struct tagVCVideoTransmitterStreamConfig *_streamConfigs;
    int _streamCount;
    int _tilesPerFrame;
    _Bool _useRateControl;
    unsigned int _pixelFormat;
    NSMutableDictionary *_customFeatureListStrings;
}

@property (nonatomic) long long videoResolution;
@property (nonatomic) int videoSource;
@property (nonatomic) long long codecType;
@property (nonatomic) unsigned long long framerate;
@property (nonatomic) unsigned long long txMaxBitrate;
@property (nonatomic) unsigned long long txMinBitrate;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (nonatomic) _Bool enableCVO;
@property (nonatomic) unsigned long long cvoExtensionID;
@property (nonatomic) unsigned long long recommendedMTU;
@property (nonatomic) struct opaqueRTCReporting *reportingAgent;
@property (nonatomic) int reportingParentID;
@property (nonatomic) int videoPayload;
@property (nonatomic) int encodingMode;
@property (nonatomic) _Atomic unsigned char *videoPriorityPointer;
@property (nonatomic) unsigned long long customWidth;
@property (nonatomic) unsigned long long customHeight;
@property (nonatomic) int mode;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic, readonly) struct tagVCVideoTransmitterStreamConfig *streamConfigs;
@property (nonatomic) int streamCount;
@property (nonatomic) int tilesPerFrame;
@property (nonatomic) _Bool useRateControl;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic, readonly) NSDictionary *customFeatureListStrings;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)addCustomFeatureListString:(id)arg1 payload:(int)arg2;

@end
