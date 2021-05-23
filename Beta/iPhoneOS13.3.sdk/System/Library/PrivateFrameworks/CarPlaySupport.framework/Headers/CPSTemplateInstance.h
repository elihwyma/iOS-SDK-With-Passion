/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <Foundation/NSObject.h>

#import <CarPlaySupport/Swift-Protocol.h>

@class CPSApplicationStateMonitor, CPSBannerSourceProxy, CPSMapTemplateViewController, CPSOverlayViewController, FBScene, NSMutableDictionary, NSString, NSUUID, NSXPCConnection, NSXPCListener;

@protocol CPSTemplateInstanceDelegate, CPTemplateServiceClientInterface;

@interface CPSTemplateInstance : NSObject <Swift>

{
    NSString *_sceneIdentifier;
    CPSOverlayViewController *_overlayViewController;
    id <CPSTemplateInstanceDelegate> _delegate;
    FBScene *_scene;
    NSXPCListener *_listener;
    NSMutableDictionary *_identifierToViewControllerDictionary;
    CPSBannerSourceProxy *_bannerSourceProxy;
    CPSMapTemplateViewController *_rootMapController;
    id <CPTemplateServiceClientInterface> _remoteObjectProxy;
    CPSApplicationStateMonitor *_applicationStateMonitor;
    NSXPCConnection *_connection;
    NSUUID *_actionSheetIdentifier;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) CPSOverlayViewController *overlayViewController;
@property (retain, nonatomic) NSMutableDictionary *identifierToViewControllerDictionary;
@property (retain, nonatomic) CPSBannerSourceProxy *bannerSourceProxy;
@property (retain, nonatomic) CPSMapTemplateViewController *rootMapController;
@property (retain, nonatomic) id <CPTemplateServiceClientInterface> remoteObjectProxy;
@property (retain, nonatomic) CPSApplicationStateMonitor *applicationStateMonitor;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSUUID *actionSheetIdentifier;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (weak, nonatomic, readonly) id <CPSTemplateInstanceDelegate> delegate;
@property (weak, nonatomic) FBScene *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)endpoint;
- (id)initWithWindowScene:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)setHostPrefersDarkUserInterfaceStyle:(_Bool)arg1;
- (void)popToRootTemplateAnimated:(id)arg1;
- (void)popTemplateAnimated:(id)arg1;
- (void)popToTemplate:(id)arg1 animated:(id)arg2;
- (void)containsTemplate:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dismissTemplateAnimated:(id)arg1;
- (void)getPresentedTemplateWithReply:(CDUnknownBlockType)arg1;
- (void)getTopTemplateWithReply:(CDUnknownBlockType)arg1;
- (void)getTemplatesWithReply:(CDUnknownBlockType)arg1;
- (void)presentVoiceTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)pushGridTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)pushMapTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestBannerProviderWithReply:(CDUnknownBlockType)arg1;
- (void)requestNavigationProviderForMapTemplate:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)pushListTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)pushSearchTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)presentActionSheetTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3;
- (void)presentAlertTemplate:(id)arg1 withProxyDelegate:(id)arg2;
- (void)dismissAlertAnimated:(_Bool)arg1;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (void)bannerDidAppearWithIdentifier:(id)arg1;
- (void)bannerDidDisappearWithIdentifier:(id)arg1;
- (void)templateViewControllerDidPop:(id)arg1;
- (void)templateViewControllerDidDismiss:(id)arg1;
- (void)updateSafeAreaInsets:(struct UIEdgeInsets)arg1;
- (void)updateInterestingInsets:(struct UIEdgeInsets)arg1;
- (id)initWithSceneIdentifier:(id)arg1 delegate:(id)arg2;
- (void)whitelistClassesForBaseTemplateProvider:(id)arg1;

@end
