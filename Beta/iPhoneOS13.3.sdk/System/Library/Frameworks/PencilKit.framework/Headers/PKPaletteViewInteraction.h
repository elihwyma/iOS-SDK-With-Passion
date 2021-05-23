/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSLayoutConstraint, NSString, PKPaletteHostView, UIView, UIWindowScene;

@protocol PKPaletteViewDelegate;

@interface PKPaletteViewInteraction : NSObject

{
    PKPaletteHostView *_paletteHostView;
    UIWindowScene *_windowScene;
    UIView *_view;
    NSLayoutConstraint *_paletteHostViewWidthConstraint;
    NSLayoutConstraint *_paletteHostViewHeightConstraint;
    NSLayoutConstraint *_paletteHostViewTopConstraint;
    NSLayoutConstraint *_paletteHostViewLeftConstraint;
    struct CGRect _sceneBounds;
    struct CGRect _textEffectsWindowFrame;
}

@property (retain, nonatomic) PKPaletteHostView *paletteHostView;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) struct CGRect sceneBounds;
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewLeftConstraint;
@property (nonatomic) struct CGRect textEffectsWindowFrame;
@property (weak, nonatomic) id <PKPaletteViewDelegate> delegate;
@property (weak, nonatomic) UIWindowScene *windowScene;
@property (nonatomic, readonly, getter=isPaletteVisible) _Bool paletteVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isHostedWindow:(id)arg1;
+ (id)paletteViewInteractionForCanvas:(id)arg1;
+ (id)paletteViewInteractionForWindow:(id)arg1 windowScene:(id)arg2;

- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect)arg1;
- (id)hostingWindow;
- (void)_updatePaletteTraitCollection:(id)arg1;
- (struct CGRect)paletteHostingWindowSceneBounds;
- (id)initWithWindowSize:(struct CGSize)arg1;
- (void)_updateSceneBounds;
- (id)_viewControllerForPalette;
- (void)_updateForWillRotate:(id)arg1;
- (void)_updateForRotation:(id)arg1;
- (void)_sceneDidActivateNotification:(id)arg1;
- (void)_updatePaletteViewConstraints;
- (id)_traitCollectionForHostingWindow;
- (void)showPaletteViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hidePaletteViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
