/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <AccessibilityUtilities/AXServer.h>

@interface AXPerformanceTestReportingServer : AXServer

+ (id)server;

- (id)_serviceName;
- (void)voiceOverTouchDidLaunch;
- (void)assistiveTouchDidLaunch;
- (void)voiceOverDidSpeak:(id)arg1;

@end
