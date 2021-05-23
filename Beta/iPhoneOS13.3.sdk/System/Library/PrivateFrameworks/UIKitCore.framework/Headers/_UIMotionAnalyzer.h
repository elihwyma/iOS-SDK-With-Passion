/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UIMotionAnalyzerSettings, _UIViewerRelativeDevicePose;

__attribute__((visibility("hidden")))
@interface _UIMotionAnalyzer : NSObject

{
    _UIMotionAnalyzerSettings *_settings;
    _UIViewerRelativeDevicePose *_viewerRelativeDevicePose;
}

@property (nonatomic, readonly) _UIMotionAnalyzerSettings *settings;
@property (nonatomic, readonly) _UIViewerRelativeDevicePose *viewerRelativeDevicePose;

- (id)init;
- (id)description;
- (void)reset;
- (id)initWithSettings:(id)arg1;
- (void)updateWithEvent:(id)arg1;
- (_Bool)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(_Bool)arg3 returningShouldToggleSlowUpdates:(_Bool *)arg4 logger:(id)arg5;
- (void)updateHistory;
- (void)resetHysteresis;

@end
