/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface SUCorePolicyExtensionAbsoluteCompatibility : NSObject

{
    NSNumber *_compatibilityVersion;
}

@property (retain, nonatomic) NSNumber *compatibilityVersion;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)summary;
- (id)extensionName;
- (void)extendSoftwareUpdateMAAssetQuery:(id)arg1;
- (void)extendDocumentatitonMAAssetQuery:(id)arg1;
- (id)filterSoftwareUpdateAssetArray:(id)arg1;
- (id)filterDocumentationAssetArray:(id)arg1;
- (void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg1;
- (void)extendMADocumentationCatalogDownloadOptions:(id)arg1;
- (void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg1;
- (void)extendMADocumentationAssetDownloadOptions:(id)arg1;

@end
