/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@interface TDCatalogGlobals : NSManagedObject

{
    unsigned long long _defaultBlendMode;
    _Bool _allowsVibrancy;
    _Bool _supportsWhitePointAdjustments;
    _Bool _supportsBrightnessAdjustments;
    _Bool _allowsSystemTintColors;
    _Bool _allowsCustomTintColors;
    _Bool _supportsMultipleAppearancesForEffects;
}

@property (nonatomic) unsigned long long defaultBlendMode;
@property (nonatomic) _Bool allowsVibrancy;
@property (nonatomic) _Bool supportsWhitePointAdjustments;
@property (nonatomic) _Bool supportsBrightnessAdjustments;
@property (nonatomic) _Bool allowsSystemTintColors;
@property (nonatomic) _Bool allowsCustomTintColors;
@property (nonatomic) _Bool supportsMultipleAppearancesForEffects;

- (id)dictionaryForArchiving;

@end
