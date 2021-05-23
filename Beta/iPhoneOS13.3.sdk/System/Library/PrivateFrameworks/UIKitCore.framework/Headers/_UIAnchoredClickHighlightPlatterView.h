/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIClickHighlightPlatterView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIAnchoredClickHighlightPlatterView : _UIClickHighlightPlatterView

{
    UIView *_anchorView;
}

@property (weak, nonatomic) UIView *anchorView;

- (id)initWithTargetedPreview:(id)arg1;
- (void)anchorToContainer;
- (void)deAnchor;

@end
