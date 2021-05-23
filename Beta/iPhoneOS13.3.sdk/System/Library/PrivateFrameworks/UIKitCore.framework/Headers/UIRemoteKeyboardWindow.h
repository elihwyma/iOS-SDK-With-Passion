/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextEffectsWindow.h>

@class CAContext, FBSScene, FBSSceneLayer, NSDictionary, NSString, UIScreen, _UIContextBinder;

__attribute__((visibility("hidden")))
@interface UIRemoteKeyboardWindow : UITextEffectsWindow

{
    NSDictionary *_perScreenOptions;
    UIScreen *_intendedScreen;
    _Bool _arePlaceholdersInitialised;
    FBSSceneLayer *_externalSceneLayer;
    FBSScene *_activeScene;
    _Bool _resetRequired;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_a002d41c _bindingDescription;
@property (weak, nonatomic, setter=_setBoundContext:) CAContext *_boundContext;
@property (weak, nonatomic, setter=_setContextBinder:) _UIContextBinder *_contextBinder;
@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;

+ (id)remoteKeyboardWindowForScreen:(id)arg1 create:(_Bool)arg2;

- (void)dealloc;
- (void)invalidate;
- (_Bool)_isHostedInAnotherProcess;
- (void)setWindowLevel:(double)arg1;
- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (_Bool)_isFullscreen;
- (_Bool)shouldAttachBindable;
- (_Bool)shouldDetachBindable;
- (void)attachBindable;
- (void)detachBindable;
- (_Bool)_isWindowServerHostingManaged;
- (void)endDisablingInterfaceAutorotation;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(_Bool)arg3 duration:(double)arg4 force:(_Bool)arg5 isRotating:(_Bool)arg6;
- (_Bool)_usesWindowServerHitTesting;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (_Bool)_matchingOptions:(id)arg1;
- (_Bool)_isTextEffectsWindowNotificationOwner;
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;
- (long long)_orientationInSceneSpace;
- (void)_resetScene;
- (_Bool)_isAlwaysKeyboardWindow;
- (_Bool)_wantsSceneAssociation;
- (_Bool)_alwaysGetsContexts;
- (_Bool)_canIgnoreInteractionEvents;
- (id)_layerForCoordinateSpaceConversion;
- (void)resetScene;
- (long long)_orientationForClassicPresentation;

@end
