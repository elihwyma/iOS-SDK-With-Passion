/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class SKUIClientContext, UINavigationController, UIView, UIViewController, _UINavigationControllerPalette;

@protocol SKUIStatusOverlayProvider;

@interface SKUINavigationControllerAssistant : NSObject

{
    _Bool _hidesShadow;
    UINavigationController *_navigationController;
    SKUIClientContext *_clientContext;
    id <SKUIStatusOverlayProvider> _statusOverlayProvider;
    UIView *_childPaletteView;
    _UINavigationControllerPalette *_paletteBackgroundView;
    UIViewController *_statusOverlayViewController;
}

@property (retain, nonatomic) UIView *childPaletteView;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) _UINavigationControllerPalette *paletteBackgroundView;
@property (retain, nonatomic) UIViewController *statusOverlayViewController;
@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic) _Bool hidesShadow;
@property (retain, nonatomic) id <SKUIStatusOverlayProvider> statusOverlayProvider;

+ (id)existingAssistantForNavigationController:(id)arg1;
+ (id)assistantForNavigationController:(id)arg1 clientContext:(id)arg2;

- (void)dealloc;
- (void)willShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setPalettePinningBarHidden:(_Bool)arg1;
- (void)setPaletteView:(id)arg1 animated:(_Bool)arg2;
- (void)setStatusOverlayProvider:(id)arg1 animated:(_Bool)arg2;
- (void)_previewDocumentChangeNotification:(id)arg1;
- (id)_initWithNavigationController:(id)arg1 clientContext:(id)arg2;
- (void)_transitionToPaletteView:(id)arg1 animated:(_Bool)arg2 operation:(long long)arg3;
- (void)_setStatusOverlayProvider:(id)arg1 animated:(_Bool)arg2;
- (void)_hideOverlayView:(id)arg1 animated:(_Bool)arg2;
- (void)_showOverlayView:(id)arg1 previousOverlayView:(id)arg2 animated:(_Bool)arg3;
- (void)_hideChildPaletteView:(id)arg1 animated:(_Bool)arg2;

@end
