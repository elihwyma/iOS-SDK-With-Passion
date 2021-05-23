/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, PKPaletteHostView, PKPaletteViewInteraction, PKTool, UIResponder;

@protocol PKToolPickerPrivateDelegate;

@interface PKToolPicker : NSObject

{
    _Bool __paletteWasCompact;
    NSHashTable *__observers;
    NSHashTable *__firstRespondersForVisibleUI;
    PKPaletteViewInteraction *__interaction;
    UIResponder *__previousFirstResponder;
    id <PKToolPickerPrivateDelegate> __delegate;
}

@property (retain, nonatomic) NSHashTable *_observers;
@property (retain, nonatomic) NSHashTable *_firstRespondersForVisibleUI;
@property (retain, nonatomic) PKPaletteViewInteraction *_interaction;
@property (nonatomic) _Bool _paletteWasCompact;
@property (weak, nonatomic) UIResponder *_previousFirstResponder;
@property (weak, nonatomic) id <PKToolPickerPrivateDelegate> _delegate;
@property (nonatomic, readonly) PKPaletteHostView *_paletteHostView;
@property (nonatomic, getter=_isBackgroundMaterialUpdatingPaused, setter=_setBackgroundMaterialUpdatingPaused:) _Bool _backgroundMaterialUpdatingPaused;
@property (retain, nonatomic) PKTool *selectedTool;
@property (nonatomic, getter=isRulerActive) _Bool rulerActive;
@property (nonatomic, readonly) _Bool isVisible;
@property (nonatomic) long long overrideUserInterfaceStyle;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedToolPickerForWindow:(id)arg1;
+ (id)activeToolPickerForWindow:(id)arg1;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithInteraction:(id)arg1;
- (void)inputResponderController:(id)arg1 inputViewSetVisibilityDidChange:(_Bool)arg2 includedReset:(_Bool)arg3;
- (id)_paletteView;
- (void)setVisible:(_Bool)arg1 forFirstResponder:(id)arg2;
- (void)_updatePaletteTraitCollection:(id)arg1;
- (struct CGRect)frameObscuredInView:(id)arg1;
- (void)paletteViewDidChangePosition:(id)arg1;
- (id)paletteViewUndoManager:(id)arg1;
- (void)paletteViewSelectedToolInkDidChange:(id)arg1;
- (void)paletteViewDidToggleRuler:(id)arg1;
- (void)paletteView:(id)arg1 didChangeColor:(id)arg2;
- (struct CGRect)paletteViewColorPickerPopoverPresentationSourceRect:(id)arg1;
- (id)paletteViewColorPickerPopoverPresentationSourceView:(id)arg1;
- (void)_saveStateIfNecessary;
- (id)_currentFirstResponder;
- (_Bool)_internalClassWantsToolPickerVisibleForResponder:(id)arg1;
- (_Bool)_currentFirstResponderWantsToolPickerVisible;
- (void)_setVisible:(_Bool)arg1;
- (void)_updateVisibilityForFirstResponder:(id)arg1;
- (id)_internalClassesAcceptingFirstResponder;
- (_Bool)_wantsPaletteToStayVisibleForPopovers;

@end
