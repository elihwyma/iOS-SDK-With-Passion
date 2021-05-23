/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAnalyticsEvent.h>

@class NSUUID;

@interface HFAnalyticsCameraClipPlayerDidStartPlayingEvent : HFAnalyticsEvent

{
    NSUUID *_clipID;
    NSUUID *_cameraID;
    NSUUID *_playbackSessionID;
}

@property (retain, nonatomic) NSUUID *clipID;
@property (retain, nonatomic) NSUUID *cameraID;
@property (retain, nonatomic) NSUUID *playbackSessionID;

- (id)initWithData:(id)arg1;
- (id)payload;

@end
