/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIInputView;

__attribute__((visibility("hidden")))
@interface _UIInputViewContent : UIView

{
    double _contentHeight;
    double _contentWidth;
    UIInputView *_inputView;
    unsigned long long _unclippableCorners;
}

@property (nonatomic) unsigned long long _unclippableCorners;

- (struct CGSize)_contentSize;
- (void)addSubview:(id)arg1;
- (_Bool)_isToolbar;
- (struct CGSize)_sizeFittingContentViews;
- (id)initWithFrame:(struct CGRect)arg1 inputView:(id)arg2;
- (void)_setToolbarBackgroundImage:(id)arg1;
- (void)_setToolbarBackgroundViewWithImage:(id)arg1;
- (void)_updateCornerClipping;

@end
