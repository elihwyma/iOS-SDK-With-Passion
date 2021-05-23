/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class _UINavigationBarVisualProviderLegacyIOS;

__attribute__((visibility("hidden")))
@interface _UINavigationBarLegacyContentView : UIView

{
    _UINavigationBarVisualProviderLegacyIOS *_visualProvider;
}

@property (nonatomic) _UINavigationBarVisualProviderLegacyIOS *visualProvider;

- (void)layoutSubviews;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;

@end
