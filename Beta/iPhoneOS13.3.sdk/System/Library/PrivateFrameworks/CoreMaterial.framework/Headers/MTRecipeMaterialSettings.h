/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@protocol MTTinting><MTMaterialFiltering;

@interface MTRecipeMaterialSettings : NSObject

{
    long long _materialSettingsVersion;
    NSString *_recipeName;
    NSDictionary *_styles;
    id <MTTinting><MTMaterialFiltering> _baseMaterialSettings;
    id <MTTinting><MTMaterialFiltering> _baseOverlaySettings;
    id <MTTinting><MTMaterialFiltering> _primaryOverlaySettings;
    id <MTTinting><MTMaterialFiltering> _secondaryOverlaySettings;
    id <MTTinting><MTMaterialFiltering> _auxiliaryOverlaySettings;
}

@property (retain, nonatomic) NSDictionary *styles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long materialSettingsVersion;
@property (copy, nonatomic, readonly) NSString *recipeName;
@property (nonatomic, readonly) id <MTTinting><MTMaterialFiltering> baseMaterialSettings;
@property (nonatomic, readonly) id <MTTinting><MTMaterialFiltering> baseOverlaySettings;
@property (nonatomic, readonly) id <MTTinting><MTMaterialFiltering> primaryOverlaySettings;
@property (nonatomic, readonly) id <MTTinting><MTMaterialFiltering> secondaryOverlaySettings;
@property (nonatomic, readonly) id <MTTinting><MTMaterialFiltering> auxiliaryOverlaySettings;

+ (id)styleSetNameForStyleSetFromRecipeWithName:(id)arg1;

- (id)_platformColorsStyleSetName;
- (id)settingsForConfiguration:(id)arg1;
- (id)_visualStyleSetDescription;
- (id)styleNameForCategory:(id)arg1;
- (id)initWithRecipeName:(id)arg1 andDescription:(id)arg2 descendantDescriptions:(id)arg3;
- (id)_newVisualStyleSet;

@end
