/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIViewController.h>

@class AKAnnotation, AKAnnotationTheme, AKPageController, AKTouchOutsideViewGestureRecognizer, IMTheme, NSString, UIView;

@protocol AKAnnotationEditorDelegate;

@interface AKAnnotationPopoverViewController : UIViewController

{
    AKTouchOutsideViewGestureRecognizer *mHideOnTouchGestureRecognizer;
    AKAnnotation *mAnnotation;
    AKPageController *mAnnotationPageController;
    AKAnnotationTheme *mAnnotationTheme;
    int mPosition;
    id mObserver;
    _Bool _editsOnLaunch;
    UIView *_presentationView;
    id <AKAnnotationEditorDelegate> _delegate;
    struct CGRect _presentationRect;
}

@property (retain, nonatomic) UIView *presentationView;
@property (nonatomic) struct CGRect presentationRect;
@property (weak, nonatomic) id <AKAnnotationEditorDelegate> delegate;
@property (nonatomic) int position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) AKAnnotation *annotation;
@property (retain, nonatomic) AKPageController *annotationPageController;
@property (retain, nonatomic) AKAnnotationTheme *annotationTheme;
@property (nonatomic) _Bool editsOnLaunch;
@property (retain, nonatomic) IMTheme *theme;

- (id)init;
- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)hide;
- (void)didShow;
- (void)willShow;
- (void)releaseOutlets;
- (void)presentFromRect:(struct CGRect)arg1 view:(id)arg2;
- (_Bool)canPresentInPosition:(int)arg1;
- (struct CGRect)p_containerFrameForView:(id)arg1;
- (void)popInAnimation:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)willHide;
- (void)hideAnimation:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)didHide;
- (int)willPresentInPosition:(struct CGRect)arg1 view:(id)arg2;

@end
