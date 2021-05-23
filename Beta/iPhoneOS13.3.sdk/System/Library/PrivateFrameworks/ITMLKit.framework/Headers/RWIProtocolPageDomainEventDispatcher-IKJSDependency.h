/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <WebInspector/RWIProtocolPageDomainEventDispatcher.h>

@interface RWIProtocolPageDomainEventDispatcher (IKJSDependency)

- (void)safe_frameStartedLoadingWithFrameId:(id)arg1;
- (void)safe_frameNavigatedWithFrame:(id)arg1;
- (void)safe_frameStoppedLoadingWithFrameId:(id)arg1;
- (void)safe_frameScheduledNavigationWithFrameId:(id)arg1 delay:(double)arg2;
- (void)safe_loadEventFiredWithTimestamp:(double)arg1;
- (void)safe_defaultAppearanceDidChangeWithAppearance:(long long)arg1;
- (void)safe_domContentEventFiredWithTimestamp:(double)arg1;
- (void)safe_frameDetachedWithFrameId:(id)arg1;
- (void)safe_frameClearedScheduledNavigationWithFrameId:(id)arg1;

@end
