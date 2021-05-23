/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKPasswordView : UIView

{
    struct RetainPtr<NSString> _documentName;
    struct RetainPtr<UIScrollView> _scrollView;
    struct RetainPtr<UIDocumentPasswordView> _passwordView;
    double _savedMinimumZoomScale;
    double _savedMaximumZoomScale;
    double _savedZoomScale;
    struct CGSize _savedContentSize;
    struct RetainPtr<UIColor> _savedBackgroundColor;
    CDUnknownBlockType _userDidEnterPassword;
}

@property (nonatomic, readonly) NSString *documentName;
@property (copy, nonatomic) CDUnknownBlockType userDidEnterPassword;

- (void)dealloc;
- (id).cxx_construct;
- (void)layoutSubviews;
- (void)_keyboardDidShow:(id)arg1;
- (void)hide;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 documentName:(id)arg2;
- (void)showInScrollView:(id)arg1;
- (void)showPasswordFailureAlert;

@end
