/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIToolbarConfiguration : NSObject

{
    _Bool _translucent;
    long long _barStyle;
    UIImage *_shadowImage;
    UIImage *_backgroundImage;
    UIColor *_backgroundColor;
    UIColor *_barTintColor;
}

@property (nonatomic) long long barStyle;
@property (nonatomic, getter=isTranslucent) _Bool translucent;
@property (retain, nonatomic) UIImage *shadowImage;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *barTintColor;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
