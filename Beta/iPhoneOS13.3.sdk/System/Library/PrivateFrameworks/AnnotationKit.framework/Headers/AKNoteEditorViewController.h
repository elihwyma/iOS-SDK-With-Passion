/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIViewController.h>

@class AKPopupAnnotation, UITextView;

@protocol AKNoteEditorViewControllerDelegate;

@interface AKNoteEditorViewController : UIViewController

{
    UITextView *_textView;
    AKPopupAnnotation *_annotation;
    id <AKNoteEditorViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) UITextView *textView;
@property (retain) AKPopupAnnotation *annotation;
@property (weak, nonatomic) id <AKNoteEditorViewControllerDelegate> delegate;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;

@end
