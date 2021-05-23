/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKController.h>

@class AKActionController, AKAttributeController, AKLegacyDoodleController, AKMainEventHandler, AKModelController, AKSignatureModelController, AKToolController, AKUndoController, UIView;

@protocol AKControllerDelegateProtocol;

@interface AKControllerForTesting : AKController

{
    id <AKControllerDelegateProtocol> _testingDelegate;
    AKModelController *_testingModelController;
    AKActionController *_testingActionController;
    AKToolController *_testingToolController;
    AKAttributeController *_testingAttributeController;
    AKUndoController *_testingUndoController;
    AKMainEventHandler *_testingMainEventHandler;
    UIView *_testingToolbarView;
    UIView *_testingOverlayView;
    AKLegacyDoodleController *_testingIntelligentSketchController;
    AKSignatureModelController *_testingSignatureModelController;
}

@property (retain) id <AKControllerDelegateProtocol> testingDelegate;
@property (retain) AKModelController *testingModelController;
@property (retain) AKActionController *testingActionController;
@property (retain) AKToolController *testingToolController;
@property (retain) AKAttributeController *testingAttributeController;
@property (retain) AKUndoController *testingUndoController;
@property (retain) AKMainEventHandler *testingMainEventHandler;
@property (retain) UIView *testingToolbarView;
@property (retain) UIView *testingOverlayView;
@property (retain) AKLegacyDoodleController *testingIntelligentSketchController;
@property (retain) AKSignatureModelController *testingSignatureModelController;

+ (void)renderAnnotation:(id)arg1 inContext:(struct CGContext *)arg2;

- (id)init;
- (id)delegate;
- (id)overlayView;
- (id)modelController;
- (id)toolbarView;
- (void)performActionForSender:(id)arg1;
- (id)actionController;
- (id)mainEventHandler;
- (id)attributeController;
- (id)toolController;
- (id)signatureModelController;
- (id)undoController;
- (_Bool)validateSender:(id)arg1;
- (id)legacyDoodleController;
- (void)updateOverlayViewAtIndex:(unsigned long long)arg1;
- (void)setOverlayShouldPixelate:(_Bool)arg1;
- (void)reloadVisibleToolbarItemIdentifiers;

@end
