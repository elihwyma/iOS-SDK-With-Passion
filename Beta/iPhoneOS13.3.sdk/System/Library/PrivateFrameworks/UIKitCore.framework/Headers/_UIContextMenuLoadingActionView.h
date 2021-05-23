/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIContextMenuActionView.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuLoadingActionView : _UIContextMenuActionView

{
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;

- (id)init;
- (void)traitCollectionDidChange:(id)arg1;
- (id)trailingView;
- (void)_updateContentAppearance;
- (id)_contentsTintColor;
- (id)_contentsCompositingFilter;

@end
