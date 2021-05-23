/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAnalyticsEvent.h>

@class NSString, NSUUID;

@interface HFAnalyticsCameraClipPlayerDidUpdateErrorEvent : HFAnalyticsEvent

{
    NSUUID *_playbackSessionID;
    NSString *_errorDomain;
    long long _errorCode;
}

@property (retain, nonatomic) NSUUID *playbackSessionID;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) long long errorCode;

- (id)initWithData:(id)arg1;
- (id)payload;

@end
