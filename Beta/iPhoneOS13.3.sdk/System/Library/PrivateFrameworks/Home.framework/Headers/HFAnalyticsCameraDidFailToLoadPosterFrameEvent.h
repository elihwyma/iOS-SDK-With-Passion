/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAnalyticsEvent.h>

@class NSDate, NSString, NSUUID;

@interface HFAnalyticsCameraDidFailToLoadPosterFrameEvent : HFAnalyticsEvent

{
    NSUUID *_clipID;
    NSUUID *_cameraID;
    double _posterFrameTimeOffset;
    NSDate *_clipStartDate;
    NSString *_errorDomain;
    long long _errorCode;
}

@property (retain, nonatomic) NSUUID *clipID;
@property (retain, nonatomic) NSUUID *cameraID;
@property (nonatomic) double posterFrameTimeOffset;
@property (retain, nonatomic) NSDate *clipStartDate;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) long long errorCode;

- (id)initWithData:(id)arg1;
- (id)payload;

@end
