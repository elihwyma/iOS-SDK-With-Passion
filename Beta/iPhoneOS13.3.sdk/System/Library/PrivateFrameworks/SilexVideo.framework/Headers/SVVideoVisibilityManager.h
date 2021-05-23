/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol SVVideoQueueObserving, SVVideoTransitionManager, SVVideoVisibilityMonitorProviding, SVVideoVisiblePercentageManager;

@interface SVVideoVisibilityManager : NSObject

{
    id <SVVideoVisibilityMonitorProviding> _visibilityMonitorProvider;
    id <SVVideoTransitionManager> _transitionManager;
    id <SVVideoQueueObserving> _queueObserver;
    id <SVVideoVisiblePercentageManager> _visiblePercentageManager;
    NSMutableDictionary *_visibilityMonitors;
}

@property (nonatomic, readonly) id <SVVideoVisibilityMonitorProviding> visibilityMonitorProvider;
@property (nonatomic, readonly) id <SVVideoTransitionManager> transitionManager;
@property (nonatomic, readonly) id <SVVideoQueueObserving> queueObserver;
@property (nonatomic, readonly) id <SVVideoVisiblePercentageManager> visiblePercentageManager;
@property (nonatomic, readonly) NSMutableDictionary *visibilityMonitors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)lock;
- (void)unlock;
- (void)updateVisibility;
- (void)startMonitoringVideo:(id)arg1;
- (void)stopMonitoringVideo:(id)arg1;
- (id)initWithTransitionManager:(id)arg1 queueObserver:(id)arg2 visibilityMonitorProvider:(id)arg3 visiblePercentageManager:(id)arg4;

@end
