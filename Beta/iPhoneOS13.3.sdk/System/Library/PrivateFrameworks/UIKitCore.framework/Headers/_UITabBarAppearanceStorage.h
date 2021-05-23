/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIColor, UIImage, _UITabBarItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UITabBarAppearanceStorage : NSObject

{
    UIImage *backgroundImage;
    UIImage *shadowImage;
    UIImage *selectionIndicatorImage;
    UIColor *barTintColor;
    UIColor *selectedImageTintColor;
    _UITabBarItemAppearanceStorage *tabItemAppearanceStorage;
    UIColor *_unselectedImageTintColor;
}

@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *shadowImage;
@property (retain, nonatomic) UIImage *selectionIndicatorImage;
@property (retain, nonatomic) UIColor *barTintColor;
@property (retain, nonatomic) UIColor *selectedImageTintColor;
@property (retain, nonatomic) UIColor *unselectedImageTintColor;
@property (retain, nonatomic) _UITabBarItemAppearanceStorage *tabItemAppearanceStorage;

- (id)_tabItemAppearanceStorage;

@end
