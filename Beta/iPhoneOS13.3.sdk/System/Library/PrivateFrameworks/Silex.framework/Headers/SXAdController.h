/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, SXDocument, SXViewport;

@protocol OS_dispatch_semaphore, SXAdControllerDelegate, SXAdControllerPresentationDelegate, SXAdProvider, SXAdvertisingSettings;

@interface SXAdController : NSObject

{
    _Bool _debuggingEnabled;
    _Bool _interactivityDebuggingEnabled;
    _Bool _didLoadFirstBannerView;
    id <SXAdvertisingSettings> _debugAdvertisementSettings;
    id <SXAdControllerDelegate> _delegate;
    id <SXAdControllerPresentationDelegate> _presentationDelegate;
    id <SXAdProvider> _adProvider;
    SXDocument *_document;
    SXViewport *_viewport;
    NSMutableArray *_componentViewsDisplayingAds;
    NSObject<OS_dispatch_semaphore> *_bannerViewsSemaphore;
    NSMutableDictionary *_bannerViews;
}

@property (nonatomic, readonly) id <SXAdProvider> adProvider;
@property (nonatomic, readonly) SXDocument *document;
@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic, readonly) NSMutableArray *componentViewsDisplayingAds;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *bannerViewsSemaphore;
@property (retain, nonatomic) NSMutableDictionary *bannerViews;
@property (nonatomic) _Bool didLoadFirstBannerView;
@property (nonatomic, getter=isDebuggingEnabled) _Bool debuggingEnabled;
@property (nonatomic, getter=isInteractivityDebuggingEnabled) _Bool interactivityDebuggingEnabled;
@property (retain, nonatomic) id <SXAdvertisingSettings> debugAdvertisementSettings;
@property (weak, nonatomic) id <SXAdControllerDelegate> delegate;
@property (weak, nonatomic) id <SXAdControllerPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (id)initWithAdProvider:(id)arg1 document:(id)arg2 viewport:(id)arg3;
- (void)transitionToSizeWithVisibleBounds:(struct CGRect)arg1;
- (void)disableAdInteraction;
- (void)resumeAdInteraction;
- (_Bool)allowComponentViewInFirstViewport:(id)arg1;
- (_Bool)isRect:(struct CGRect)arg1 withinMinimumDistanceOfRect:(struct CGRect)arg2 viewport:(struct CGSize)arg3;
- (_Bool)componentViewWithinScreenHeightOfViewport:(id)arg1;
- (_Bool)isDisplayingAdsWithinScreenfullOfComponentView:(id)arg1;
- (_Bool)isComponentViewWithinFirstViewport:(id)arg1;
- (_Bool)component:(id)arg1 isLastComponentInComponents:(id)arg2;
- (_Bool)shouldRequestBannerViewForComponentView:(id)arg1;
- (CDUnknownBlockType)bannerViewForComponentView:(id)arg1 component:(id)arg2 metadataProvider:(id)arg3 adType:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)prerollForComponent:(id)arg1 metadataProvider:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)componentView:(id)arg1 didLoadBannerView:(id)arg2;
- (void)componentView:(id)arg1 didUnloadBannerView:(id)arg2 withError:(id)arg3;
- (void)componentView:(id)arg1 failedToLoadBannerView:(id)arg2 error:(id)arg3;
- (struct CGRect)frameForBannerViewForComponentIdentifier:(id)arg1;

@end
