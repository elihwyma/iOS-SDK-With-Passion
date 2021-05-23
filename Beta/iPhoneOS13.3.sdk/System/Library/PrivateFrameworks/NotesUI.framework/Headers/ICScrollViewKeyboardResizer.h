/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class UIScrollView;

@protocol ICScrollViewKeyboardResizerDelegate;

@interface ICScrollViewKeyboardResizer : NSObject

{
    _Bool _autoResizing;
    _Bool _showingKeyboard;
    _Bool _observingKeyboardNotifications;
    _Bool _didResizeScrollView;
    id <ICScrollViewKeyboardResizerDelegate> _delegate;
}

@property (nonatomic, getter=isObservingKeyboardNotifications) _Bool observingKeyboardNotifications;
@property (nonatomic, getter=isAutoResizing) _Bool autoResizing;
@property (nonatomic) _Bool didResizeScrollView;
@property (nonatomic) _Bool showingKeyboard;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (weak, nonatomic) id <ICScrollViewKeyboardResizerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)applyInsetsFromKeyboardFrame:(struct CGRect)arg1 duration:(double)arg2;
- (void)clearInsetsWithDuration:(double)arg1;
- (void)startAutoResizing;
- (void)stopAutoResizing;
- (void)reapplyInsets;

@end
