/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTEditingModelColors, AVTUILogger, NSData, NSError;

@interface AVTEditingModelDefinitionsParser : NSObject

{
    AVTUILogger *_logger;
    NSData *_plistData;
    NSError *_error;
    AVTEditingModelColors *_colorCache;
}

@property (nonatomic, readonly) AVTUILogger *logger;
@property (nonatomic, readonly) NSData *plistData;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AVTEditingModelColors *colorCache;

+ (id)dataFromAvatarKit;
+ (id)errorWithDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)dataFromBundle;

- (id)initWithLogger:(id)arg1;
- (void)parseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPlistData:(id)arg1 logger:(id)arg2;
- (id)decodePropertyListObjects:(id)arg1;
- (id)parseCoreModelFromDefinitions:(id)arg1;
- (id)coreModelGroupFromGroupDictionary:(id)arg1;
- (id)coreModelCategoryFromCategoryDictionary:(id)arg1;
- (_Bool)validateForCategoryWithEnumValue:(id)arg1 presetPickers:(id)arg2 colorPickers:(id)arg3;
- (_Bool)validateForColorPicker:(id)arg1 colorPaletteCategory:(id)arg2 error:(id *)arg3;
- (id)coreModelColorPaletteForColorPickerDictionary:(id)arg1 settingDestination:(long long)arg2 inCategory:(long long)arg3;
- (id)coreModelPresetsForCategory:(long long)arg1;
- (struct NSDictionary *)gatherAllTagsFromPresets:(id)arg1;
- (id)coreModelRowFromRowDictionary:(id)arg1 availableTags:(struct NSDictionary *)arg2 usedTags:(id)arg3;
- (id)coreModelColorsForColorDefinitions:(id)arg1 paletteSettingKind:(CDStruct_597dd055)arg2;
- (id)coreModelColorsForPaletteSettingKind:(CDStruct_597dd055)arg1;
- (id)coreModelRowOptionsFromOptionsDictionary:(id)arg1;

@end
