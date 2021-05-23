/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionReusableView.h>

@class UIView, _UIBackdropView, _UIBackdropViewSettings;

__attribute__((visibility("hidden")))
@interface SKUIStorePagePinnedBackdropDecorationView : UICollectionReusableView

{
    _UIBackdropView *_backdropView;
    UIView *_backgroundView;
    _UIBackdropViewSettings *_backdropStyleDefaultSettings;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)applyLayoutAttributes:(id)arg1;

@end
