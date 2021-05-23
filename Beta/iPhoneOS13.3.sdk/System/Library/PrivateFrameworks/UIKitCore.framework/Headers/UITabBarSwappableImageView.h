/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImageView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UITabBarSwappableImageView : UIImageView

{
    UIImage *_value;
    UIImage *_alternate;
    UIImage *_landscapeValue;
    UIImage *_landscapeAlternate;
    _Bool _showAlternate;
    _Bool _showLandscape;
}

- (void)setImage:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToWindow;
- (id)_selectedImage;
- (void)showAlternateImage:(_Bool)arg1;
- (id)_unselectedImage;
- (void)setCurrentImage;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2 landscapeImage:(id)arg3 landscapeAlternateImage:(id)arg4;
- (id)_unselectedCompactImage;
- (id)_selectedCompactImage;
- (void)setAlternateImage:(id)arg1;
- (void)setLandscape:(_Bool)arg1;

@end
