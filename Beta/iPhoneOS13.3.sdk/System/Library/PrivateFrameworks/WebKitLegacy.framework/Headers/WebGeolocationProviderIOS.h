/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WebGeolocationProviderIOS : NSObject

{
    struct RetainPtr<WebGeolocationCoreLocationProvider> _coreLocationProvider;
    struct RetainPtr<_WebCoreLocationUpdateThreadingProxy> _coreLocationUpdateListenerProxy;
    _Bool _enableHighAccuracy;
    _Bool _isSuspended;
    _Bool _shouldResetOnResume;
    struct HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>, WTF::PtrHash<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>> _webViewsWaitingForCoreLocationAuthorization;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>> _pendingInitialPositionWebView;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>> _registeredWebViews;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>> _trackedWebViews;
    struct RetainPtr<NSTimer> _sendLastPositionAsynchronouslyTimer;
    struct RetainPtr<WebGeolocationPosition> _lastPosition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedGeolocationProvider;

- (void)dealloc;
- (void)resume;
- (void)suspend;
- (id).cxx_construct;
- (void)setEnableHighAccuracy:(_Bool)arg1;
- (void)geolocationAuthorizationGranted;
- (void)geolocationAuthorizationDenied;
- (void)positionChanged:(id)arg1;
- (void)errorOccurred:(id)arg1;
- (void)resetGeolocation;
- (void)registerWebView:(id)arg1;
- (void)unregisterWebView:(id)arg1;
- (void)initializeGeolocationForWebView:(id)arg1 listener:(id)arg2;
- (id)lastPosition;
- (void)_handlePendingInitialPosition:(id)arg1;
- (void)stopTrackingWebView:(id)arg1;

@end
