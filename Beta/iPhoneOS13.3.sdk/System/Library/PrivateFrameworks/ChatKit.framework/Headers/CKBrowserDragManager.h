/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKBrowserDragViewController, NSString, UILongPressGestureRecognizer, UIView, UIViewController, UIWindow;

@protocol CKBrowserDragControllerDelegate, CKBrowserDragControllerTranscriptDelegate;

@interface CKBrowserDragManager : NSObject

{
    id <CKBrowserDragControllerDelegate> _delegate;
    id <CKBrowserDragControllerTranscriptDelegate> _transcriptDelegate;
    id _currentItem;
    UILongPressGestureRecognizer *_gestureRecognizer;
    UIView *_targetView;
    CKBrowserDragViewController *_dragViewController;
    UIWindow *_dragWindow;
    UIViewController *_presentingViewController;
    struct CGPoint _locationInView;
}

@property (retain, nonatomic) id currentItem;
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer;
@property (nonatomic) struct CGPoint locationInView;
@property (retain, nonatomic) UIView *targetView;
@property (retain, nonatomic) CKBrowserDragViewController *dragViewController;
@property (retain, nonatomic) UIWindow *dragWindow;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) id <CKBrowserDragControllerDelegate> delegate;
@property (weak, nonatomic) id <CKBrowserDragControllerTranscriptDelegate> transcriptDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)tapRecognized:(id)arg1;
- (void)beginDraggingItem:(id)arg1 withAnimatedDragImage:(id)arg2 fromRect:(struct CGRect)arg3;
- (_Bool)usesSeparateDragWindow;
- (void)browserDragViewController:(id)arg1 draggedWithTarget:(id)arg2;
- (void)browserDragViewController:(id)arg1 dragEndedWithTarget:(id)arg2;
- (id)initWithTargetView:(id)arg1;
- (void)beginDraggingItem:(id)arg1 withDragImage:(id)arg2 fromRect:(struct CGRect)arg3;
- (void)setPlusButtonHidden:(_Bool)arg1;

@end
