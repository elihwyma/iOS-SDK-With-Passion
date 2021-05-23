/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKViewController.h>

@class IMScheduledUpdater, UIScrollView;

@interface CKScrollViewController : CKViewController

{
    _Bool _topInsetIncludesPalette;
    _Bool _keyboardVisible;
    _Bool _keyboardInteractionCancelled;
    UIScrollView *_scrollView;
    double _topInsetPadding;
    double _bottomInsetPadding;
    double _minimumBottomInset;
    IMScheduledUpdater *_updater;
    CDUnknownBlockType _overrideScrollBlock;
    struct CGRect _keyboardScreenFrame;
}

@property (nonatomic, getter=isKeyboardVisible) _Bool keyboardVisible;
@property (nonatomic) struct CGRect keyboardScreenFrame;
@property (nonatomic) _Bool keyboardInteractionCancelled;
@property (retain, nonatomic) IMScheduledUpdater *updater;
@property (copy, nonatomic) CDUnknownBlockType overrideScrollBlock;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) _Bool topInsetIncludesPalette;
@property (nonatomic, readonly) double topInsetPadding;
@property (nonatomic, readonly) double bottomInsetPadding;
@property (nonatomic, readonly) double minimumBottomInset;
@property (nonatomic, readonly) struct CGRect keyboardFrame;
@property (nonatomic, readonly) struct CGRect keyboardFrameInViewCoordinates;
@property (nonatomic, readonly, getter=isKeyboardUndocked) _Bool keyboardUndocked;
@property (nonatomic, readonly, getter=isKeyboardOnscreenWithoutAccessoryView) _Bool keyboardOnscreenWithoutAccessoryView;

- (id)init;
- (void)dealloc;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)beginHoldingScrollGeometryUpdatesForKey:(id)arg1;
- (void)endHoldingScrollGeometryUpdatesForKey:(id)arg1;
- (struct UIEdgeInsets)navigationBarInsets;
- (void)keyboardWillShowOrHide:(id)arg1;
- (void)keyboardDidShowOrHide:(id)arg1;
- (void)primeWithKeyboardFrame:(struct CGRect)arg1;
- (void)updateScrollGeometry;
- (double)bottomInsetWithoutAccessoryView;
- (struct UIEdgeInsets)navigationBarInsetsWithoutPalette;
- (double)accessoryViewHeight;
- (void)contentInsetWillChange:(struct UIEdgeInsets)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)contentInsetDidChange;
- (void)keyboardWillHideViaGesture;
- (void)_changedStatusBarFrame:(id)arg1;
- (void)_entryViewWillRotate:(id)arg1;
- (double)_visibleKeyboardHeight;
- (void)_updateScrollGeometryWithDuration:(double)arg1;
- (void)keyboardVisibilityWillChange;
- (double)_bottomRotatingFooterHeight;
- (double)visibleHeightAboveKeyboard;
- (void)endHoldingScrollGeometryUpdatesForAllKeys;
- (_Bool)isHoldingScrollGeometryUpdates;

@end
