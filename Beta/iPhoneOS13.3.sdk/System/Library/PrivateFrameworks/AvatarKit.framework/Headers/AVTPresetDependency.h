/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class AVTPreset, NSString;

@interface AVTPresetDependency : NSObject

{
    long long category;
    AVTPreset *preset;
    NSString *variantName;
}

@property (nonatomic) long long category;
@property (retain, nonatomic) AVTPreset *preset;
@property (retain, nonatomic) NSString *variantName;

- (id)debugDescription;

@end
