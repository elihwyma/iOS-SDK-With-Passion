/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, UIColor;

@interface AVTMaterial : NSObject

{
    struct UIColor *baseColor;
    NSDictionary *secondaryColors;
}

@property (retain) UIColor *baseColor;
@property (retain) NSDictionary *secondaryColors;

+ (id)materialWithColor:(struct UIColor *)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyToSceneKitMaterial:(id)arg1;
- (void)_encode:(id)arg1;
- (_Bool)_decode:(id)arg1;

@end
