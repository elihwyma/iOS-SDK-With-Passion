/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentView.h>

@class NFPendingPromise, NFStateMachine, NSString, SWContainerViewController, SXComponentExposureMonitor, SXWebContentComponentExposureEvent, SXWebContentComponentInteractionManager, UIActivityIndicatorView, UILabel, UITapGestureRecognizer;

@protocol SWLoadingPolicyProvider, SWNavigationManager, SWReachabilityProvider, SXAnalyticsReporting, SXLayoutInvalidator, SXResourceDataSource, SXWebContentConfigurationProvider, SXWebContentDataSourceProviding;

@interface SXWebContentComponentView : SXComponentView

{
    id <SXAnalyticsReporting> _analyticsReporting;
    SWContainerViewController *_containerViewController;
    id <SXWebContentConfigurationProvider> _configurationProvider;
    id <SWNavigationManager> _navigationManager;
    SXWebContentComponentInteractionManager *_interactionManager;
    id <SWReachabilityProvider> _reachabilityProvider;
    id <SXResourceDataSource> _resourceDataSource;
    id <SWLoadingPolicyProvider> _loadingPolicyProvider;
    id <SXLayoutInvalidator> _layoutInvalidator;
    NFStateMachine *_stateMachine;
    UIActivityIndicatorView *_loadingIndicator;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILabel *_errorLabel;
    NFPendingPromise *_invalidationPromise;
    SXComponentExposureMonitor *_componentExposureMonitor;
    SXWebContentComponentExposureEvent *_componentExposureEvent;
    id <SXWebContentDataSourceProviding> _dataSourceProvider;
}

@property (nonatomic, readonly) id <SXAnalyticsReporting> analyticsReporting;
@property (nonatomic, readonly) SWContainerViewController *containerViewController;
@property (nonatomic, readonly) id <SXWebContentConfigurationProvider> configurationProvider;
@property (nonatomic, readonly) id <SWNavigationManager> navigationManager;
@property (nonatomic, readonly) SXWebContentComponentInteractionManager *interactionManager;
@property (nonatomic, readonly) id <SWReachabilityProvider> reachabilityProvider;
@property (nonatomic, readonly) id <SXResourceDataSource> resourceDataSource;
@property (nonatomic, readonly) id <SWLoadingPolicyProvider> loadingPolicyProvider;
@property (nonatomic, readonly) id <SXLayoutInvalidator> layoutInvalidator;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (nonatomic, readonly) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) NFPendingPromise *invalidationPromise;
@property (nonatomic, readonly) SXComponentExposureMonitor *componentExposureMonitor;
@property (retain, nonatomic) SXWebContentComponentExposureEvent *componentExposureEvent;
@property (nonatomic, readonly) id <SXWebContentDataSourceProviding> dataSourceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layout;
- (void)layoutSubviews;
- (void)configure;
- (void)handleTap:(id)arg1;
- (id)createStateMachine;
- (void)reachabilityChanged:(_Bool)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)loadComponent:(id)arg1;
- (void)loadWebContent;
- (void)configureViewController;
- (void)configurePresentationManager;
- (void)configureErrorProvider;
- (void)configureConfigurationProvider;
- (_Bool)useLightForegroundColor;
- (void)configureComponentExposureMonitor;
- (void)reloadWebContent;
- (id)createLoadingState;
- (id)createPresentationState;
- (id)createErrorState;
- (id)createDisabledState;
- (void)layoutErrorView;
- (void)layoutLoadingIndicator;
- (void)layoutWebView;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 containerViewController:(id)arg5 configurationProvider:(id)arg6 navigationManager:(id)arg7 analyticsReporting:(id)arg8 componentExposureMonitor:(id)arg9 interactionManagerFactory:(id)arg10 reachabilityProvider:(id)arg11 resourceDataSource:(id)arg12 loadingPolicyProvider:(id)arg13 dataSourceProvider:(id)arg14 layoutInvalidator:(id)arg15;

@end
