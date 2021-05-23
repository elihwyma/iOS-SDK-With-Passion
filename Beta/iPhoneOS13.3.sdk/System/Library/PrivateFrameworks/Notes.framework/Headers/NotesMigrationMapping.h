/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@class NSArray, NSManagedObjectModel, NSString;

@interface NotesMigrationMapping : NSObject

{
    NSManagedObjectModel *_destinationModel;
    NSArray *_sourceModels;
    NSString *_descriptionString;
    long long _type;
}

@property (copy) NSArray *sourceModels;
@property (copy) NSString *descriptionString;
@property (retain) NSManagedObjectModel *destinationModel;
@property long long type;

+ (id)mappings;
+ (id)inferredMappingFromSourceModelNames:(id)arg1 toDestinationModelName:(id)arg2;
+ (id)customMappingFromSourceModelName:(id)arg1 toDestinationModelName:(id)arg2;
+ (id)modelForModelName:(id)arg1;
+ (id)descriptionStringFromSourceStoreNames:(id)arg1 destinationStoreName:(id)arg2;

- (id)description;
- (_Bool)canMigrateStoreMetadata:(id)arg1;
- (id)sourceModelForStoreMetadata:(id)arg1;
- (id)mappingModelForStoreMetadata:(id)arg1;

@end
