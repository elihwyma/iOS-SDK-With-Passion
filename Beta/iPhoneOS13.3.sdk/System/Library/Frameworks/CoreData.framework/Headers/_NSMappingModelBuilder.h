/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSEntityMapping, NSError, NSManagedObjectModel;

__attribute__((visibility("hidden")))
@interface _NSMappingModelBuilder : NSObject

{
    NSManagedObjectModel *_sourceModel;
    NSManagedObjectModel *_destinationModel;
    NSEntityMapping *_currentEntityMapping;
    NSError *_error;
}

+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(int)arg1;

- (void)dealloc;
- (void)_resetCaches;
- (id)newEntityMappingWithSource:(id)arg1 destination:(id)arg2;
- (_Bool)inferPropertyMappingsForEntityMapping:(id)arg1;
- (id)newInferredPropertyMappingWithSourceAttribute:(id)arg1 destinationAttribute:(id)arg2;
- (id)newInferredPropertyMappingWithSourceRelationship:(id)arg1 destinationRelationship:(id)arg2;
- (_Bool)checkForSchemaMatchBetween:(id)arg1 andDestination:(id)arg2;
- (_Bool)_canTransformSourceAttributeType:(unsigned long long)arg1 toDestinationAttributeType:(unsigned long long)arg2;
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2;
- (id)newInferredMappingModel:(id *)arg1;

@end
