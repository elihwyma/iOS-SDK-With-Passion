/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitMetadataModel : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)ancillaryModelNamespace;
+ (id)_newMetadataModelV1;
+ (id)_newMetadataModelV2;
+ (id)_newMetadataModelV3;
+ (id)_newMetadataModelV4;
+ (id)_newMetadataModelV5;
+ (id)_newMetadataModelV6;
+ (id)_newMetadataModelV7;
+ (id)_newMetadataModelV8;
+ (id)newMetadataModelForFrameworkVersion:(id)arg1;
+ (id)allMetadataModels;
+ (_Bool)doesMetadataModel:(id)arg1 matchConnection:(id)arg2 hasOldMetadataTables:(_Bool *)arg3;
+ (unsigned long long)ancillaryEntityOffset;
+ (void)addAttributes:(id)arg1 toPropertiesOfEntity:(id)arg2;
+ (void)addRelationships:(id)arg1 toPropertiesOfEntity:(id)arg2;
+ (_Bool)checkAndRepairSchemaOfStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (_Bool)currentMetadataVersionHashesMatchCachedMetadataVersionHashes:(id)arg1;
+ (id)identifyModelForStore:(id)arg1 withConnection:(id)arg2 hasOldMetadataTables:(_Bool *)arg3;
+ (unsigned long long)ancillaryEntityCount;

@end
