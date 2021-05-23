/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputSetHostView.h>

@class NSMutableDictionary, NSString, UIKBRenderConfig, UIScreen;

__attribute__((visibility("hidden")))
@interface UIInputSetContainerView : UIInputSetHostView

{
    UIKBRenderConfig *_renderConfig;
    NSMutableDictionary *_hostedViews;
    _Bool _disableGeometryObserverNotifications;
    struct CGPoint _offsetOrigin;
}

@property (nonatomic) struct CGPoint offsetOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, readonly) UIScreen *hostingScreen;

+ (_Bool)_shouldHitTestInputViewFirst;
+ (_Bool)_notifyOnExplicitLayout;

- (void)dealloc;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (id)_inheritedRenderConfig;
- (void)_didRemoveSubview:(id)arg1;
- (_Bool)_isTransparentFocusRegion;
- (struct CGRect)_accessoryViewFrame;
- (void)_setAccessoryViewFrame:(struct CGRect)arg1;
- (id)_inputWindowController;
- (void)addHostedView:(id)arg1 withViewRemovalHandler:(CDUnknownBlockType)arg2;
- (_Bool)hasHostedViews;
- (void)performWithoutGeometryObserverNotifications:(CDUnknownBlockType)arg1;
- (_Bool)_disableGeometryObserverNotification;

@end
