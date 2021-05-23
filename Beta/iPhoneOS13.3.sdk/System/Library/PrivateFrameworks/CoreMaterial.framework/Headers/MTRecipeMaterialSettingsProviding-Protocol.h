/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <CoreMaterial/Swift-Protocol.h>

@protocol MTTinting><MTMaterialFiltering;

@protocol MTRecipeMaterialSettingsProviding <Swift>

@property (nonatomic, readonly) id <MTTinting><MTMaterialFiltering> baseMaterialSettings;
@property (nonatomic, readonly) id <MTTinting><MTMaterialFiltering> baseOverlaySettings;
@property (nonatomic, readonly) id <MTTinting><MTMaterialFiltering> primaryOverlaySettings;
@property (nonatomic, readonly) id <MTTinting><MTMaterialFiltering> secondaryOverlaySettings;
@property (nonatomic, readonly) id <MTTinting><MTMaterialFiltering> auxiliaryOverlaySettings;

- (unsigned short)settingsForConfiguration: /* Error: Ran out of types for this method. */;

@end
