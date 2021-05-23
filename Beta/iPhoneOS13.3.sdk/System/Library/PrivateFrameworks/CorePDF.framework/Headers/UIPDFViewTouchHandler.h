/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <UIKit/UIResponder.h>

@class NSString, UILongPressGestureRecognizer, UIMenuController, UIPDFMagnifierController, UIPDFPageView, UIPDFSelectionController, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIPDFViewTouchHandler : UIResponder

{
    UIPDFPageView *_pdfPageView;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
    UILongPressGestureRecognizer *_briefPressRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_twoFingerTapRecognizer;
    UIMenuController *_menuController;
    UIPDFSelectionController *_selectionController;
    UIPDFMagnifierController *_magnifyController;
    _Bool _trackingSelection;
    _Bool _showMagnifier;
    _Bool _showLoupe;
    _Bool _firstTouch;
    _Bool _useDelegateForLinks;
    _Bool _allowMenu;
}

@property _Bool allowMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)releaseViewManager;

- (void)dealloc;
- (id)nextResponder;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)resignFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)initWithView:(id)arg1;
- (void)copy:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)hideMenu;
- (void)showMenu;
- (void)enableRecognizers;
- (void)disableRecognizers;
- (void)setFirstTouch;
- (void)doubleTapRecognized:(id)arg1;
- (void)singleTapRecognized:(id)arg1;
- (void)twoFingerTapRecognized:(id)arg1;
- (void)briefPressRecognized:(id)arg1;
- (void)longPressRecognized:(id)arg1;
- (_Bool)delegateGesture:(id)arg1 kind:(int)arg2;

@end
