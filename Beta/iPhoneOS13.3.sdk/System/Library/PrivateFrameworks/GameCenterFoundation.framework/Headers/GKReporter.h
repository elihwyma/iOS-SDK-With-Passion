/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@interface GKReporter : NSObject

{
    double _authenticateResponseTimestamp;
    double _inviteeUILaunchTimestamp;
    double _connectingDevicesTimestamp;
    double _programaticInviteTimestamp;
    double _appLaunchTimestamp;
    double _totalInviteReceivedTimestamp;
    double _messageInviteProcessingTimestamp;
}

@property (nonatomic) double authenticateResponseTimestamp;
@property (nonatomic) double inviteeUILaunchTimestamp;
@property (nonatomic) double connectingDevicesTimestamp;
@property (nonatomic) double programaticInviteTimestamp;
@property (nonatomic) double appLaunchTimestamp;
@property (nonatomic) double totalInviteReceivedTimestamp;
@property (nonatomic) double messageInviteProcessingTimestamp;

+ (id)reporter;

- (void)report:(id)arg1;
- (void)reportEvent:(id)arg1 payload:(id)arg2;
- (void)reportDistributionValue:(id)arg1 domain:(id)arg2;
- (_Bool)isTimeSpanValid:(double)arg1;
- (void)reportInviteeUILaunchDuration;
- (void)reportTotalInviteReceivedDuration;
- (void)recordInviteeUILaunchTimestamp;
- (void)reportAppLaunchDuration;
- (void)recordAuthenticateResponseTimestamp;
- (void)recordConnectingDevicesTimestamp;
- (void)reportConnectingDevicesDuration;
- (void)reportProgramaticInviteDuration;
- (void)reportAuthenticateResponseDuration;
- (void)recordProgramaticInviteTimestamp;
- (void)_nativeReport:(id)arg1 signature:(id)arg2 result:(_Bool *)arg3;
- (void)_nativeReportValue:(long long)arg1 signature:(id)arg2 domain:(id)arg3;
- (void)_nativeReportDistributionValue:(id)arg1 signature:(id)arg2 domain:(id)arg3;
- (void)report:(id)arg1 signature:(id)arg2 result:(_Bool)arg3;
- (void)reportDurationForEventType:(id)arg1 withStartTimestamp:(double)arg2;
- (void)report:(id)arg1 signature:(id)arg2;
- (void)reportValue:(long long)arg1 domain:(id)arg2;
- (void)recordMessageInviteProcessingTimestamp;
- (void)reportMessageInviteProcessingDuration;
- (void)recordAppLaunchAndTotalTimestamp;

@end
