/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKAnnotation, AKController, AKPageController, CALayer, NSString, NSTextStorage, NSUndoManager, UITextView, UIView;

@protocol AKTextAnnotationProtocol;

@interface AKTextEditorController : NSObject

{
    _Bool _isInEndEditing;
    _Bool _isInAdjustAnnotationFrameToFitText;
    UITextView *_textView;
    AKAnnotation<AKTextAnnotationProtocol> *_annotation;
    AKController *_controller;
    AKPageController *_pageController;
    CALayer *_textViewMaskLayer;
    UIView *_textViewContainer;
    NSTextStorage *_textStorage;
    double _renderingTextStorageScaleFactor;
    double _modelToEditorScaleFactor;
    double _handleCompensatingScaleFactor;
    NSUndoManager *_textViewUndoManager;
}

@property (weak) AKController *controller;
@property (weak) AKPageController *pageController;
@property (weak) AKAnnotation<AKTextAnnotationProtocol> *annotation;
@property (retain) UITextView *textView;
@property (retain) CALayer *textViewMaskLayer;
@property (retain) UIView *textViewContainer;
@property (retain) NSTextStorage *textStorage;
@property double renderingTextStorageScaleFactor;
@property double modelToEditorScaleFactor;
@property double handleCompensatingScaleFactor;
@property (retain) NSUndoManager *textViewUndoManager;
@property _Bool isInEndEditing;
@property _Bool isInAdjustAnnotationFrameToFitText;
@property (nonatomic, readonly) _Bool isEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)endEditing;
- (void)_keyboardDidHide:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)_endEditing;
- (void)_performBlockOnMainThread:(CDUnknownBlockType)arg1;
- (id)initWithController:(id)arg1;
- (void)updateForTextAttributeChange;
- (void)commitToModelWithoutEndingEditing;
- (void)beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(_Bool)arg3;
- (void)_registerForKeyboardNotifications;
- (void)_unregisterForKeyboardNotifications;
- (void)_beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(_Bool)arg3;
- (void)_commitToModelWithoutEndingEditing;
- (struct CGRect)_editorFrameForTextBoundsInModel:(struct CGRect)arg1;
- (id)_newScaledPaths:(id)arg1 withScaleFactor:(double)arg2 aboutCenter:(struct CGPoint)arg3;
- (void)_adjustEditorToFitAnnotation:(id)arg1 withText:(id)arg2;
- (void)_adjustAnnotationFrameToFitText;
- (void)_updateTextView:(id)arg1 withFrame:(struct CGRect)arg2 andOrientation:(long long)arg3 additionalRotation:(double)arg4;

@end
