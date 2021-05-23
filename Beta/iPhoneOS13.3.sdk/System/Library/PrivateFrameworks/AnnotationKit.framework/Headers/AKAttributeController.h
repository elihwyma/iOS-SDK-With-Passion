/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKController, AKPageModelController, NSDictionary, PKInk, UIColor, UIFont;

@interface AKAttributeController : NSObject

{
    _Bool _strokeIsDashed;
    _Bool _hasShadow;
    AKPageModelController *modelControllerToObserveForSelections;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    PKInk *_ink;
    double _strokeWidth;
    long long _brushStyle;
    unsigned long long _arrowHeadStyle;
    UIFont *_font;
    NSDictionary *_textAttributes;
    long long _highlightStyle;
    AKController *_controller;
}

@property (weak) AKController *controller;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain) UIColor *fillColor;
@property (retain, nonatomic) PKInk *ink;
@property double strokeWidth;
@property _Bool strokeIsDashed;
@property _Bool hasShadow;
@property long long brushStyle;
@property unsigned long long arrowHeadStyle;
@property (retain) UIFont *font;
@property (retain) NSDictionary *textAttributes;
@property (retain, nonatomic) AKPageModelController *modelControllerToObserveForSelections;
@property (nonatomic) long long highlightStyle;

+ (void)initialize;
+ (id)defaultFont;
+ (id)defaultTextAttributes;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithController:(id)arg1;
- (void)forceHideRuler;
- (void)annotationEditingDidEndWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDefaultInk;
- (void)toggleRuler;
- (void)_restorePersistedAttributes;
- (void)beganDrawingStroke;
- (void)didEndOrCancelStroke;
- (void)_syncAttributesFromSelectedAnnotationsToUI;
- (void)_updateInk;
- (void)_persistCurrentAttributes;
- (void)_syncAttributesFromSenderToSelfAndSelectedAnnotations:(id)arg1 segment:(long long)arg2;
- (_Bool)_isEnabledForSender:(id)arg1 segment:(long long)arg2 withSelectedAnnotations:(id)arg3;
- (void)_updateStateOnSender:(id)arg1 segment:(long long)arg2;
- (void)_disableInkPicker:(_Bool)arg1;
- (void)updateInkIfNeeded:(id)arg1;
- (void)syncFillColorOnSelectionToUI;
- (void)syncStrokeColorOnSelectionToUI;
- (_Bool)_updateStateOnSender:(id)arg1 segment:(long long)arg2 fromSelectedAnnotations:(id)arg3;
- (void)_updateStateOnSenderFromSelf:(id)arg1 segment:(long long)arg2;
- (void)_allAnnotations:(id)arg1 all:(_Bool *)arg2 atLeastOneShare:(_Bool *)arg3 attributeFromTag:(long long)arg4;
- (void)performAttributeActionForSender:(id)arg1 segment:(long long)arg2;
- (_Bool)isAttributeSenderEnabled:(id)arg1 segment:(long long)arg2;
- (void)updateAttributeSenderState:(id)arg1 segment:(long long)arg2 enabled:(_Bool)arg3;
- (_Bool)strokeColorIsEqualTo:(id)arg1;
- (void)restoreStrokeColorToSystemDefault;
- (void)resetToLastDrawingInk;

@end
