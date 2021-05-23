/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKNoteEditorViewController, AKPopupAnnotation, NSString;

@protocol AKNoteEditorControllerDelegate;

@interface AKNoteEditorController : NSObject

{
    AKPopupAnnotation *_annotation;
    id <AKNoteEditorControllerDelegate> _delegate;
    AKNoteEditorViewController *_contentViewController;
}

@property (retain) AKNoteEditorViewController *contentViewController;
@property (retain, nonatomic) AKPopupAnnotation *annotation;
@property (nonatomic, readonly) NSString *editedText;
@property (weak, nonatomic) id <AKNoteEditorControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)hide;
- (void)show:(_Bool)arg1;
- (id)_popupBackgroundColorForPopupAnnotation:(id)arg1;
- (void)finishEditing;
- (void)noteEditorViewControllerDidBeginEditing:(id)arg1;
- (void)noteEditorViewControllerDidEndEditing:(id)arg1;
- (double)suggestedEditorHeightForWidth:(double)arg1;
- (void)beginEditing:(_Bool)arg1;

@end
