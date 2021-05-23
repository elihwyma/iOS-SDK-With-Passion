/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AVTStickerPresetOverride : NSObject

{
    long long _category;
    NSString *_presetIdentifier;
    NSArray *_unlessIdentifiers;
}

@property (nonatomic, readonly) long long category;
@property (copy, nonatomic, readonly) NSString *presetIdentifier;
@property (nonatomic, readonly) NSArray *unlessIdentifiers;

+ (id)presetOverrideFromDictionary:(id)arg1 forCategoryName:(id)arg2;

- (void)applyToAvatar:(id)arg1;
- (id)overridenPresetForAvatar:(id)arg1;
- (id)initWithCategory:(long long)arg1 presetIdentifier:(id)arg2 unless:(id)arg3;

@end
