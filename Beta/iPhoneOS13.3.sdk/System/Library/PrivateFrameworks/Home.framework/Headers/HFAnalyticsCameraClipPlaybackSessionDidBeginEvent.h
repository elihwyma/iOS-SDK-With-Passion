/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAnalyticsEvent.h>

@class NSDate, NSString, NSUUID;

@interface HFAnalyticsCameraClipPlaybackSessionDidBeginEvent : HFAnalyticsEvent

{
    _Bool _recordingIsComplete;
    NSUUID *_clipID;
    NSUUID *_cameraID;
    NSUUID *_playbackSessionID;
    NSUUID *_previousPlaybackSessionID;
    NSDate *_clipStartDate;
    NSString *_processName;
}

@property (retain, nonatomic) NSUUID *clipID;
@property (retain, nonatomic) NSUUID *cameraID;
@property (retain, nonatomic) NSUUID *playbackSessionID;
@property (retain, nonatomic) NSUUID *previousPlaybackSessionID;
@property (retain, nonatomic) NSDate *clipStartDate;
@property (nonatomic) _Bool recordingIsComplete;
@property (retain, nonatomic) NSString *processName;

+ (id)sharedPlaybackSessionID;
+ (void)setSharedPlaybackSessionID:(id)arg1;

- (id)initWithData:(id)arg1;
- (id)payload;

@end
