/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSStoreMappingGenerator : NSObject

+ (void)invalidate;
+ (id)defaultMappingGenerator;

- (id)externalNameForEntityName:(id)arg1;
- (id)mappingsDictForConfigurationWithName:(id)arg1 inModel:(id)arg2;
- (id)externalNameForPropertyName:(id)arg1;
- (id)mappingForAttribute:(id)arg1 forConfigurationWithName:(id)arg2;
- (id)mappingForRelationship:(id)arg1 forConfigurationWithName:(id)arg2;
- (id)primaryKeyForEntity:(id)arg1;
- (id)joinsForRelationship:(id)arg1;
- (id)mappingForEntity:(id)arg1 forConfigurationWithName:(id)arg2;
- (id)mappingsForConfigurationWithName:(id)arg1 inModel:(id)arg2;
- (id)internalNameForEntityName:(id)arg1 version:(int)arg2;
- (id)internalNameForPropertyName:(id)arg1 version:(int)arg2;

@end
