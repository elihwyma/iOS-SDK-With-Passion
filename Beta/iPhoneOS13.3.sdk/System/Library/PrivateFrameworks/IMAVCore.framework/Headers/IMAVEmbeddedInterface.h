/*
 Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <IMAVCore/IMAVConferenceInterface.h>

@interface IMAVEmbeddedInterface : IMAVConferenceInterface

+ (void)updateCriticalState;

- (void)chatStateUpdated;
- (void)_conferenceWillStart:(id)arg1;
- (void)_conferenceEnded:(id)arg1;
- (long long)_checkNetworkForChat:(id)arg1 requiresWifi:(_Bool)arg2;
- (long long)_runPingTestForChat:(id)arg1;

@end
