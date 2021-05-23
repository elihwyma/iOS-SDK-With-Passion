/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <SilexVideo/SVVisibilityMonitor.h>

@class SVKeyValueObserver;

@interface SXVideoPlayerAdSlotVisibilityMonitor : SVVisibilityMonitor

{
    SVKeyValueObserver *_observer;
}

@property (nonatomic, readonly) SVKeyValueObserver *observer;

- (id)initWithVideoPlayerViewController:(id)arg1 videoAdSlotVisiblePercentageProvider:(id)arg2;

@end
