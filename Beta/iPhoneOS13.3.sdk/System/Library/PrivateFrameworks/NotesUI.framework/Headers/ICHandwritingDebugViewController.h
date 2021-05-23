/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSObject, NSString, UIActivityIndicatorView, UITextView;

@protocol ICHandwritingDebugDelegate, OS_dispatch_queue;

@interface ICHandwritingDebugViewController : UIViewController

{
    id <ICHandwritingDebugDelegate> _handwritingDebugDelegate;
    NSArray *_drawings;
    UITextView *_textView;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
    UIActivityIndicatorView *_activityIndicator;
}

@property (retain, nonatomic) NSArray *drawings;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recognitionQueue;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (weak, nonatomic) id <ICHandwritingDebugDelegate> handwritingDebugDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)close;
- (void)refresh;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)visualizationManagerDidUpdateRecognitionStatus:(id)arg1;
- (id)handwritingDebugWindow;

@end
