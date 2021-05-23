/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray;

@protocol _TVPagePerformanceDelegate;

@interface _TVPagePerformanceController : NSObject

{
    struct timeval _baseTimeval;
    unsigned long long _baseAbsoluteTime;
    NSMutableArray *_templateEntries;
    _Bool _pageHasSubpages;
    _Bool _pageWasInterrupted;
    _Bool _pageWasUpdated;
    _Bool _pageIsLoading;
    id <_TVPagePerformanceDelegate> _delegate;
    unsigned long long _viewWillLoad;
    unsigned long long _viewDidLoad;
    unsigned long long _viewWillAppear;
    unsigned long long _viewDidAppear;
    unsigned long long _viewWillDisappear;
    unsigned long long _viewDidDisappear;
    unsigned long long _pageCompleteDuration;
    unsigned long long _pageSetupDuration;
    unsigned long long _pageRenderDuration;
    unsigned long long _pageResourceDuration;
    unsigned long long _pageTransitionDuration;
}

@property (nonatomic) unsigned long long viewWillLoad;
@property (nonatomic) unsigned long long viewDidLoad;
@property (nonatomic) unsigned long long viewWillAppear;
@property (nonatomic) unsigned long long viewDidAppear;
@property (nonatomic) unsigned long long viewWillDisappear;
@property (nonatomic) unsigned long long viewDidDisappear;
@property (nonatomic) _Bool pageIsLoading;
@property (nonatomic) _Bool pageHasSubpages;
@property (nonatomic) _Bool pageWasInterrupted;
@property (nonatomic) _Bool pageWasUpdated;
@property (nonatomic) unsigned long long pageCompleteDuration;
@property (nonatomic) unsigned long long pageSetupDuration;
@property (nonatomic) unsigned long long pageRenderDuration;
@property (nonatomic) unsigned long long pageResourceDuration;
@property (nonatomic) unsigned long long pageTransitionDuration;
@property (weak, nonatomic) id <_TVPagePerformanceDelegate> delegate;
@property (nonatomic, readonly) NSDictionary *metrics;

+ (void)postNotificationForImageProxy:(id)arg1 withLoadingStatus:(_Bool)arg2;
+ (_Bool)isPerformanceUIEnabled;

- (id)init;
- (void)markViewWillLoad;
- (void)markViewDidLoad;
- (void)markViewWillAppear;
- (void)markViewDidAppear;
- (void)markViewWillDisappear;
- (void)markViewDidDisappear;
- (id)getEntryForTemplate:(id)arg1;
- (void)_maybeDeliverMetrics;
- (unsigned long long)templateDidComplete;
- (void)_calculatePageDurations;
- (_Bool)_isMetricsReady;
- (id)buildPagePerformanceView;

@end
