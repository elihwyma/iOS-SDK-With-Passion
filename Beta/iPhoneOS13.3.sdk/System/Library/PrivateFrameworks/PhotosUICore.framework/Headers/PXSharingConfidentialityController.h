/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXSharingConfidentialityController : NSObject

+ (_Bool)confidentialWarningRequiredForAsset:(id)arg1;
+ (_Bool)confidentialWarningRequiredForAssets:(id)arg1;
+ (_Bool)confidentialWarningRequiredForAssetReferences:(id)arg1;
+ (_Bool)confidentialWarningRequiredForShareableSelection:(id)arg1;
+ (_Bool)confidentialityCheckRequired;
+ (id)confidentialityWarningTitle;
+ (id)confidentialityWarningMessage;
+ (id)confidentialFeatureWarningMessage;
+ (id)confidentialityAlertWithActions:(id)arg1;

@end
