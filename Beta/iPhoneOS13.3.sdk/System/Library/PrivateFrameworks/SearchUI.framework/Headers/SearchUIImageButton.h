/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UIButton.h>

@class SearchUIImage;

@interface SearchUIImageButton : UIButton

{
    SearchUIImage *_unselectedImage;
    SearchUIImage *_selectedImage;
}

@property (retain, nonatomic) SearchUIImage *unselectedImage;
@property (retain, nonatomic) SearchUIImage *selectedImage;

- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)arg1;

@end
