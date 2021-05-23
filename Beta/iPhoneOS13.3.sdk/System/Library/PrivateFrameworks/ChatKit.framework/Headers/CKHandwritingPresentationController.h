/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKBrowserItemPayload, CKDeviceOrientationManager, CKHandwritingWindow, CKScheduledUpdater, NSString, UIViewController;

@protocol CKHandwritingBrowserViewControllerProtocol, CKHandwritingPresentationControllerDelegate, CKHandwritingViewControllerSendDelegate;

__attribute__((visibility("hidden")))
@interface CKHandwritingPresentationController : NSObject

{
    _Bool _requestedVisibility;
    _Bool _actualVisibility;
    _Bool _requestedVisibilityShouldBeAnimated;
    _Bool _suppressAppearanceCallbacksBecauseOfFirstInitialization;
    _Bool _foregrounded;
    NSObject<CKHandwritingPresentationControllerDelegate> *_delegate;
    CKDeviceOrientationManager *_deviceOrientationManager;
    long long _initialInterfaceOrientation;
    CKHandwritingWindow *_handwritingWindow;
    UIViewController<CKHandwritingBrowserViewControllerProtocol> *_browserViewController;
    CKScheduledUpdater *_animationScheduledUpdater;
    NSObject<CKHandwritingViewControllerSendDelegate> *_cachedSendDelegate;
    CKBrowserItemPayload *_cachedPluginPayload;
}

@property (retain, nonatomic) CKHandwritingWindow *handwritingWindow;
@property (retain, nonatomic) UIViewController<CKHandwritingBrowserViewControllerProtocol> *browserViewController;
@property (retain, nonatomic) CKScheduledUpdater *animationScheduledUpdater;
@property (nonatomic) _Bool requestedVisibility;
@property (nonatomic) _Bool actualVisibility;
@property (nonatomic) _Bool requestedVisibilityShouldBeAnimated;
@property (weak, nonatomic) NSObject<CKHandwritingViewControllerSendDelegate> *cachedSendDelegate;
@property (retain, nonatomic) CKBrowserItemPayload *cachedPluginPayload;
@property (nonatomic) _Bool suppressAppearanceCallbacksBecauseOfFirstInitialization;
@property (nonatomic) _Bool foregrounded;
@property (weak, nonatomic) NSObject<CKHandwritingViewControllerSendDelegate> *sendDelegate;
@property (weak, nonatomic) NSObject<CKHandwritingPresentationControllerDelegate> *delegate;
@property (retain, nonatomic) CKDeviceOrientationManager *deviceOrientationManager;
@property (retain, nonatomic) CKBrowserItemPayload *pluginPayload;
@property (nonatomic) long long initialInterfaceOrientation;
@property (nonatomic) _Bool visible;
@property (readonly) NSString *pluginBundleID;

- (id)init;
- (void)dealloc;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateVisibilityState;
- (_Bool)isHandwritingLandscape;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_loadCachedPayloadIntoBrowser;
- (void)_flushHandwritingWindowCacheIfNeeded;
- (void)_doInitialization;

@end
