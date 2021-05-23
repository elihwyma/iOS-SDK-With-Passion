/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface NSMappingModel : NSObject

{
    void *_reserved;
    void *_reserved1;
    void *_reserved2;
    NSMutableArray *_entityMappings;
    NSMutableDictionary *_entityMappingsByName;
    struct __modelMappingFlags {
        unsigned int _isInUse:1;
        unsigned int _reservedModelMapping:31;
    } _modelMappingFlags;
}

@property (retain) NSArray *entityMappings;
@property (copy, readonly) NSDictionary *entityMappingsByName;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(int)arg1;
+ (id)_mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3;
+ (id)_newMappingModelFromBundles:(id)arg1 forSourceHashes:(id)arg2 destinationHashes:(id)arg3;
+ (id)mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3;
+ (id)inferredMappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id *)arg3;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (_Bool)isEditable;
- (void)_setIsEditable:(_Bool)arg1;
- (void)_throwIfNotEditable;
- (void)_createCachesAndOptimizeState;
- (_Bool)_hasInferredMappingNeedingValidation;
- (id)_initWithEntityMappings:(id)arg1;
- (void)_addEntityMapping:(id)arg1;
- (_Bool)_isInferredMappingModel;
- (id)_sourceEntityVersionHashesByName;
- (id)_destinationEntityVersionHashesByName;

@end
