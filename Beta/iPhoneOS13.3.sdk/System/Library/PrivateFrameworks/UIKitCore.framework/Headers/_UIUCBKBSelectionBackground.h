/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIKBKeyView;

__attribute__((visibility("hidden")))
@interface _UIUCBKBSelectionBackground : UIView

{
    UIKBKeyView *_backgroundProvidingView;
    _Bool _showButtonShape;
}

@property (nonatomic) _Bool showButtonShape;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateBackgroundProvidingView;
- (id)_makeBackgroundView;

@end
