/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <UIKit/UIScene.h>

@class CPInterfaceController, CPWindow, NSString, UIScreen, UITraitCollection, _UIContextBinder;

@protocol CPTemplateApplicationSceneDelegate, NSObject, UICoordinateSpace;

@interface CPTemplateApplicationScene : UIScene

{
    _UIContextBinder *_contextBinder;
    UIScreen *_screen;
    UITraitCollection *_traitCollection;
    long long _screenRequestedOverscanCompensation;
    id <NSObject> _sceneWillConnectObserver;
    id <NSObject> _didFinishLaunchingObserver;
    _Bool _sceneWillConnect;
    CPWindow *_carWindow;
    CPInterfaceController *_interfaceController;
    struct CGRect _bounds;
}

@property (retain, nonatomic) CPWindow *carWindow;
@property (retain, nonatomic) id <CPTemplateApplicationSceneDelegate> delegate;
@property (nonatomic, readonly) CPInterfaceController *interfaceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIScreen *_screen;
@property (nonatomic, readonly) long long _interfaceOrientation;
@property (nonatomic, readonly) id <UICoordinateSpace> _coordinateSpace;
@property (nonatomic, readonly) UITraitCollection *_traitCollection;
@property (nonatomic, readonly) struct CGRect bounds;

+ (_Bool)_hostsWindows;
+ (id)activeTemplateScene;

- (void)_invalidate;
- (id)_definition;
- (id)_allWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;
- (void)_readySceneForConnection;
- (id)_fbsSceneLayerForWindow:(id)arg1;
- (struct UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (id)_componentForKey:(id)arg1;
- (_Bool)_permitContextCreationForBindingDescription:(CDStruct_a002d41c)arg1;
- (void)_attachWindow:(id)arg1;
- (void)_detachWindow:(id)arg1;
- (void)_updateVisibleWindowOrderWithTest:(CDUnknownBlockType)arg1;
- (void)_windowUpdatedVisibility:(id)arg1;
- (void)_windowUpdatedProperties:(id)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (void)updateLayoutGuideWithInsets:(struct UIEdgeInsets)arg1;
- (void)_deliverInterfaceControllerToDelegate;

@end
