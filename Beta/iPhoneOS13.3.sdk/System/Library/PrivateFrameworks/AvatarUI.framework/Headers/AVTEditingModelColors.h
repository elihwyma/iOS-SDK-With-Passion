/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarColorVariationStore, NSDictionary;

@interface AVTEditingModelColors : NSObject

{
    AVTAvatarColorVariationStore *_variationStore;
    struct NSDictionary *_storage;
}

@property (nonatomic, readonly) NSDictionary *storage;
@property (retain, nonatomic) AVTAvatarColorVariationStore *variationStore;

+ (id)buildAllColors;
+ (void)createColorsForPaletteCategory:(long long)arg1 inCache:(id)arg2 withDerivedPaletteCategories:(id)arg3;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)colorsForSettingKind:(CDStruct_597dd055)arg1;
- (id)colorForSettingKind:(CDStruct_597dd055)arg1 identifier:(id)arg2;
- (id)initWithStorage:(struct NSDictionary *)arg1 variationStore:(id)arg2;

@end
