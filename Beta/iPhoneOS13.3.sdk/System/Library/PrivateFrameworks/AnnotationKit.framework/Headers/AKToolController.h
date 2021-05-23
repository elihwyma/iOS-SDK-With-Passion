/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKController;

@interface AKToolController : NSObject

{
    _Bool _allInkEnabled;
    _Bool _pencilInkEnabled;
    unsigned long long _toolMode;
    AKController *_controller;
}

@property (weak) AKController *controller;
@property _Bool allInkEnabled;
@property _Bool pencilInkEnabled;
@property (nonatomic, readonly) _Bool isInDefaultMode;
@property unsigned long long toolMode;

+ (void)cascadeAnnotations:(id)arg1 onPageController:(id)arg2 forPaste:(_Bool)arg3;

- (void)dealloc;
- (id)initWithController:(id)arg1;
- (void)resetToDefaultMode;
- (void)addNewAnnotation:(id)arg1 onPageController:(id)arg2 shouldSelect:(_Bool)arg3 shouldCascade:(_Bool)arg4;
- (id)createAnnotationOfType:(long long)arg1 centeredAtPoint:(struct CGPoint)arg2;
- (void)_peripheralAvailabilityDidUpdate:(id)arg1;
- (void)performToolActionForSender:(id)arg1;
- (_Bool)isToolSenderEnabled:(id)arg1;
- (void)updateToolSenderState:(id)arg1 enabled:(_Bool)arg2;
- (struct CGPoint)_defaultCenterForNewAnnotation;
- (double)_modelBaseScaleFactorForNewAnnotation;
- (id)_defaultFillColorForAnnotationOfClass:(Class)arg1;
- (double)_strokeWidthForNewAnnotation;
- (id)_strokeColorForNewAnnotation;
- (struct CGRect)_defaultRectangleForNewAnnotation:(id)arg1 centeredAtPoint:(struct CGPoint)arg2;
- (id)_defaultTypingAttributes;
- (unsigned long long)_arrowStyleForToolTag:(long long)arg1;
- (id)_defaultTextBoxTypingAttributes;
- (id)_defaultHeartTypingAttributesWithFillColor:(id)arg1;
- (void)_setRectangleToFitTextOnTextAnnotation:(id)arg1;
- (unsigned long long)defaultToolMode;
- (struct CGRect)_validatedRect:(struct CGRect)arg1 fitsInVisibleRegionOfOverlayView:(id)arg2 ownedByPageController:(id)arg3 centeredAtPoint:(struct CGPoint)arg4;
- (struct CGRect)_centerBounds:(struct CGRect)arg1 atPoint:(struct CGPoint)arg2;

@end
