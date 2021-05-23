/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAnalyticsEvent.h>

@interface HFAnalyticsCameraRecordingCloudUpgradeResultEvent : HFAnalyticsEvent

{
    unsigned long long _numCamerasWithRecording;
    unsigned long long _iCloudUpgradeOfferPresented;
    unsigned long long _iCloudPlanUpgradeState;
}

@property (nonatomic) unsigned long long numCamerasWithRecording;
@property (nonatomic) unsigned long long iCloudUpgradeOfferPresented;
@property (nonatomic) unsigned long long iCloudPlanUpgradeState;

- (id)initWithData:(id)arg1;
- (id)payload;

@end
