/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTColorPreset, AVTCoreModelColor;

@interface AVTCoreModelColorVariation : NSObject

{
    AVTColorPreset *_colorPreset;
    AVTCoreModelColor *_color;
}

@property (nonatomic, readonly) AVTColorPreset *colorPreset;
@property (nonatomic, readonly) AVTCoreModelColor *color;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithColor:(id)arg1 colorPreset:(id)arg2;

@end
