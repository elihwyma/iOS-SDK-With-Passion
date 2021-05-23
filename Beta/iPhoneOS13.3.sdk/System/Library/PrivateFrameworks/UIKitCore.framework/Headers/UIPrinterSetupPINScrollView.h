/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIScrollView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupPINScrollView : UIScrollView

{
    UIView *_contentView;
    double _visibleHeight;
}

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double visibleHeight;

- (void)dealloc;
- (id)initWithContentView:(id)arg1;
- (void)layoutSubviews;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)keyboardDidChangeFrame:(id)arg1;
- (_Bool)_scrollsToMakeFirstResponderVisible;

@end
