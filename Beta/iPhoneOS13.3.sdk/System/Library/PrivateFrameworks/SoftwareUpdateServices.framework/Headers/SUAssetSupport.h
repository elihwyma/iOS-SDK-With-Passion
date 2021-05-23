/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@interface SUAssetSupport : NSObject

+ (id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)arg1;
+ (id)tryCreateDocumentationFromDocumentationAsset:(id)arg1;
+ (void)setSUFilters:(id)arg1;
+ (void)_cleanupAllAssetsOfType:(id)arg1;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExists;
+ (id)findAssetWithMatcher:(id)arg1 localSearch:(_Bool)arg2 releaseDate:(id *)arg3 error:(id *)arg4;
+ (id)_gestaltValueForKey:(struct __CFString *)arg1;
+ (long long)requestCatalogDownload:(id)arg1;
+ (void)setAssetQueryFilters:(id)arg1;
+ (id)queryMetaDataOfType:(id)arg1 WithFilter:(id)arg2 installedOnly:(_Bool)arg3 error:(id *)arg4;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExistsWithReleaseDate:(id *)arg1;
+ (id)findAssetWithMatcher:(id)arg1 localSearch:(_Bool)arg2 error:(id *)arg3;
+ (id)defaultAssetDownloadOptionsWithPriority:(int)arg1;
+ (id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)arg1 withReleaseDate:(id)arg2;
+ (void)cleanupAllSoftwareUpdateAssets;
+ (void)cleanupAllSoftwareUpdateAndRelatedAssets;
+ (id)copySUAssetForAssetID:(id)arg1;
+ (id)copyInstalledAssets;
+ (id)copySuAssetInCatalogMatchingDescriptor:(id)arg1;
+ (void)purgeMSUUpdate:(CDUnknownBlockType)arg1;
+ (id)assetDownloadOptionsForDocumentation;
+ (id)assetDownloadOptionsFromMetadata:(id)arg1 descriptor:(id)arg2 priority:(int)arg3 forBrain:(_Bool)arg4;

@end
