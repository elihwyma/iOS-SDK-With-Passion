/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTColorPreset, NSDictionary, NSString;

@interface AVTCoreModelColor : NSObject

{
    _Bool _showSlider;
    float _rangeMin;
    float _rangeMax;
    AVTColorPreset *_baseColorPreset;
    unsigned long long _order;
    NSDictionary *_derivedColorsByCategories;
    CDStruct_597dd055 _settingKind;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) AVTColorPreset *baseColorPreset;
@property (nonatomic, readonly) CDStruct_597dd055 settingKind;
@property (nonatomic, readonly) unsigned long long order;
@property (nonatomic, readonly, getter=canShowSlider) _Bool showSlider;
@property (nonatomic, readonly) float rangeMin;
@property (nonatomic, readonly) float rangeMax;
@property (copy, nonatomic, readonly) NSDictionary *derivedColorsByCategories;

- (_Bool)isEqual:(id)arg1;
- (id)thumbnail;
- (_Bool)requiresEncryption;
- (id)volatileIdentifierForScope:(id)arg1;
- (unsigned long long)costForScope:(id)arg1;
- (id)initWithColorPreset:(id)arg1 settingKind:(CDStruct_597dd055)arg2 order:(unsigned long long)arg3 showSlider:(_Bool)arg4 rangeMin:(float)arg5 rangeMax:(float)arg6 derivedColorsByCategories:(id)arg7;
- (id)initWithColorPreset:(id)arg1 settingKind:(CDStruct_597dd055)arg2 order:(unsigned long long)arg3 derivedColorsByCategories:(id)arg4;
- (id)copyWithRangeMin:(float)arg1 rangeMax:(float)arg2 showSlider:(_Bool)arg3;
- (id)copyForPairedCategory:(long long)arg1;

@end
