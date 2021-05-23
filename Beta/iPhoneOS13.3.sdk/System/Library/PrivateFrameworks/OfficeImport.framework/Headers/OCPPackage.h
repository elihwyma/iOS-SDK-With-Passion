/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, OCPPackageProperties, OCPPackageRelationshipCollection;

__attribute__((visibility("hidden")))
@interface OCPPackage : NSObject

{
    OCPPackageRelationshipCollection *mRelationships;
    OCPPackageProperties *mProperties;
    NSMutableDictionary *mDefaultContentTypes;
    NSMutableDictionary *mContentTypeOverrides;
}

- (id)init;
- (id)properties;
- (id)partForLocation:(id)arg1;
- (id)contentTypeForPartLocation:(id)arg1;
- (void)resetPartForLocation:(id)arg1;
- (id)mainDocumentPart;
- (id)relationshipsByType:(id)arg1;
- (id)partByRelationshipType:(id)arg1;
- (id)relationshipForIdentifier:(id)arg1;
- (void)readContentTypesXml:(struct _xmlDoc *)arg1;
- (id)initWithRelationshipsXml:(struct _xmlDoc *)arg1 corePropertiesXml:(struct _xmlDoc *)arg2 appPropertiesXml:(struct _xmlDoc *)arg3 contentTypesXml:(struct _xmlDoc *)arg4;
- (void)readDefaultContentTypeFromElement:(struct _xmlNode *)arg1;
- (void)readContentTypeOverrideFromElement:(struct _xmlNode *)arg1;

@end
