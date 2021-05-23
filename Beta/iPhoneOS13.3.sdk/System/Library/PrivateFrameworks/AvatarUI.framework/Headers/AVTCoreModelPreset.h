/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTPreset, NSDictionary, NSString;

@interface AVTCoreModelPreset : NSObject

{
    struct NSDictionary *_tags;
    AVTPreset *_preset;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (copy, nonatomic, readonly) NSDictionary *tags;
@property (nonatomic, readonly) AVTPreset *preset;

+ (struct NSDictionary *)tagSetFromPreset:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPreset:(id)arg1;
- (id)copyForPairedCategory:(long long)arg1;

@end
