/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXVideoAnalyticsRouter, SXVideoPlayerVisibilityMonitor;

@interface SXVideoPlayerViewControllerResponse : NSObject

{
    _Bool _shouldAutoplay;
    _Bool _expectVideoPlayerViewController;
    SXVideoAnalyticsRouter *_analyticsRouter;
    SXVideoPlayerVisibilityMonitor *_visibilityMonitor;
}

@property (nonatomic) _Bool shouldAutoplay;
@property (nonatomic) _Bool expectVideoPlayerViewController;
@property (retain, nonatomic) SXVideoAnalyticsRouter *analyticsRouter;
@property (retain, nonatomic) SXVideoPlayerVisibilityMonitor *visibilityMonitor;

@end
