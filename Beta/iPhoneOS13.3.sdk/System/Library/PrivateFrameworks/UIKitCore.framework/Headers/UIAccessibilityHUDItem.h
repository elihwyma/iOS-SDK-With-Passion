/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIImage, UIView;

@interface UIAccessibilityHUDItem : NSObject <Swift>

{
    _Bool _disabledAppearance;
    _Bool _flattenImage;
    _Bool _scaleImage;
    long long _customUserInterfaceStyle;
    NSString *_title;
    UIImage *_image;
    UIView *_customView;
    struct UIEdgeInsets _imageInsets;
}

@property (nonatomic) _Bool disabledAppearance;
@property (nonatomic) _Bool flattenImage;
@property (nonatomic) _Bool scaleImage;
@property (nonatomic) long long customUserInterfaceStyle;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct UIEdgeInsets imageInsets;
@property (retain, nonatomic) UIView *customView;

+ (id)HUDItemForTabBarItem:(id)arg1;
+ (id)HUDItemForBarButtonItem:(id)arg1 atPoint:(struct CGPoint)arg2 inView:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(struct UIEdgeInsets)arg3;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(struct UIEdgeInsets)arg3 scaleImage:(_Bool)arg4;
- (id)initWithCustomView:(id)arg1;

@end
