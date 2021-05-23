/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoEventTrackerProviding, SVVideoImpressionTrackerFactory, SVVideoImpressionTracking;

@interface SVVideoImpressionTrackerManager : NSObject

{
    id <SVVideoImpressionTrackerFactory> _impressionTrackerFactory;
    id <SVVideoEventTrackerProviding> _eventTrackerProvider;
    id <SVVideoImpressionTracking> _impressionTracker;
}

@property (nonatomic, readonly) id <SVVideoImpressionTrackerFactory> impressionTrackerFactory;
@property (nonatomic, readonly) id <SVVideoEventTrackerProviding> eventTrackerProvider;
@property (retain, nonatomic) id <SVVideoImpressionTracking> impressionTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithImpressionTrackerFactory:(id)arg1 eventTrackerProvider:(id)arg2;

@end
