/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBarAppearanceStorage.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage

{
    _Bool _hidesShadow;
    UIImage *_backgroundImage;
    UIImage *_miniBackgroundImage;
    UIImage *_topBackgroundImage;
    UIImage *_miniTopBackgroundImage;
    UIImage *_shadowImage;
    UIImage *_topShadowImage;
}

@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *miniBackgroundImage;
@property (retain, nonatomic) UIImage *topBackgroundImage;
@property (retain, nonatomic) UIImage *miniTopBackgroundImage;
@property (retain, nonatomic) UIImage *shadowImage;
@property (retain, nonatomic) UIImage *topShadowImage;
@property (nonatomic) _Bool hidesShadow;

+ (long long)typicalBarPosition;

@end
