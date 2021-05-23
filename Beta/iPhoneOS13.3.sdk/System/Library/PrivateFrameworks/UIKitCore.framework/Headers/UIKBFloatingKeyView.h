/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBContainerKeyView.h>

@class _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UIKBFloatingKeyView : UIKBContainerKeyView

{
    _UIFloatingContentView *_floatingContentView;
}

@property (nonatomic, readonly) _UIFloatingContentView *floatingContentView;

- (void)layoutSubviews;
- (void)prepareForDisplay;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

@end
