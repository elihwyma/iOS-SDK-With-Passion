/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIWindow.h>

@class UIView;

@protocol ICHandwritingDebugDelegate;

@interface ICHandwritingDebugWindow : UIWindow

{
    _Bool _draggingWindow;
    _Bool _resizingWindow;
    UIView *_resizeTriangle;
    struct CGPoint _initialTouchLocation;
}

@property (nonatomic, getter=isDraggingWindow) _Bool draggingWindow;
@property (nonatomic, getter=isResizingWindow) _Bool resizingWindow;
@property (nonatomic) struct CGPoint initialTouchLocation;
@property (retain, nonatomic) UIView *resizeTriangle;
@property (weak, nonatomic) id <ICHandwritingDebugDelegate> handwritingDebugDelegate;

+ (struct CGRect)preferredFrame;
+ (void)savePreferredFrame:(struct CGRect)arg1;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)refresh;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)navigationController;
- (void)sharedInit;
- (void)updateResizeTriangleFrame;
- (id)handwritingDebugViewController;

@end
