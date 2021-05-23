/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicColor.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIDynamicPatternColor : UIDynamicColor

{
    UIImage *_image;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)_resolvedColorWithTraitCollection:(id)arg1;

@end
