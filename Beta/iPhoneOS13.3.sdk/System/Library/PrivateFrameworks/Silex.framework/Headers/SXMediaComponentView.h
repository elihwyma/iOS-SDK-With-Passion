/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentView.h>

@class NSString, SXMediaExposureEvent;

@protocol SXAnalyticsReporting;

@interface SXMediaComponentView : SXComponentView

{
    _Bool _isDisplayingMedia;
    id <SXAnalyticsReporting> _analyticsReporting;
    SXMediaExposureEvent *_mediaExposureEvent;
    double _minimumVisibleY;
    double _maximumVisibleY;
    struct CGRect _visibleBounds;
}

@property (retain, nonatomic) SXMediaExposureEvent *mediaExposureEvent;
@property (nonatomic) struct CGRect visibleBounds;
@property (nonatomic) double minimumVisibleY;
@property (nonatomic) double maximumVisibleY;
@property (nonatomic, readonly) id <SXAnalyticsReporting> analyticsReporting;
@property (nonatomic) _Bool isDisplayingMedia;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6;
- (void)visibleBoundsChanged;
- (void)submitEvents;
- (id)mediaEventForClass:(Class)arg1;
- (void)willSubmitMediaExposureEvent:(id)arg1;
- (unsigned long long)analyticsMediaType;
- (unsigned long long)analyticsGalleryType;
- (_Bool)shouldSubmitMediaExposureEventForExposedBounds:(struct CGRect)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)createMediaExposureEventIfNeeded;
- (unsigned long long)analyticsVideoType;
- (void)finishMediaExposureEventIfNeeded;
- (void)calculateVisibleBounds;

@end
