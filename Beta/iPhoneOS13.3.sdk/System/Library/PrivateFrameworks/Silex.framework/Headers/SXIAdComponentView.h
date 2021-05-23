/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentView.h>

#import <Silex/Swift-Protocol.h>

@class ADBannerView, NSError, NSString, SXAdController, SXIAdDebugView;

@protocol SXAnalyticsReporting, SXHost, SXLayoutInvalidator;

@interface SXIAdComponentView : SXComponentView <Swift>

{
    _Bool _hasInvalidatedLayout;
    _Bool _isReceivingViewportChanges;
    _Bool _isDisplayingBannerView;
    _Bool _didUnloadBannerView;
    int _opportunityError;
    SXAdController *_adController;
    id <SXLayoutInvalidator> _layoutInvalidator;
    id <SXAnalyticsReporting> _analyticsReporter;
    id <SXHost> _host;
    ADBannerView *_bannerView;
    CDUnknownBlockType _cancelHandler;
    SXIAdDebugView *_debugView;
    NSError *_error;
    NSString *_generatedOpportunityIdentifier;
    struct CGSize _viewportSizeOnAdRequest;
}

@property (weak, nonatomic, readonly) SXAdController *adController;
@property (nonatomic, readonly) id <SXLayoutInvalidator> layoutInvalidator;
@property (nonatomic, readonly) id <SXAnalyticsReporting> analyticsReporter;
@property (nonatomic, readonly) id <SXHost> host;
@property (retain, nonatomic) ADBannerView *bannerView;
@property (nonatomic) _Bool hasInvalidatedLayout;
@property (nonatomic) struct CGSize viewportSizeOnAdRequest;
@property (copy, nonatomic) CDUnknownBlockType cancelHandler;
@property (nonatomic) _Bool isReceivingViewportChanges;
@property (retain, nonatomic) SXIAdDebugView *debugView;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) int opportunityError;
@property (retain, nonatomic) NSString *generatedOpportunityIdentifier;
@property (nonatomic) _Bool isDisplayingBannerView;
@property (nonatomic) _Bool didUnloadBannerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)displayBannerView;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)registerForViewportChanges;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)stopDisplayingAdWithError:(unsigned long long)arg1;
- (void)loadComponent:(id)arg1;
- (void)adSheetDisconnectedNotification:(id)arg1;
- (void)cancelAdRequest;
- (_Bool)shouldRegisterForViewportChanges;
- (void)removeBannerViewWithError:(id)arg1;
- (void)invalidateLayoutIfNeeded;
- (_Bool)shouldRequestBannerView;
- (void)requestBannerView;
- (void)layoutBannerView;
- (_Bool)hasRequestedBannerViewCurrentViewport;
- (_Bool)shouldSendOpportunityEvent;
- (void)sendOpportunityEvent;
- (void)unloadBannerWithError:(id)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)adDocumentAppearing;
- (void)adDocumentDisappeared;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 adController:(id)arg5 layoutInvalidator:(id)arg6 analyticsReporting:(id)arg7 host:(id)arg8;

@end
