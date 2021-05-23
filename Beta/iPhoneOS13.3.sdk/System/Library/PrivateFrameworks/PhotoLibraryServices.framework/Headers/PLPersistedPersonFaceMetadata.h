/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLPersistedPersonFaceMetadata : NSObject

{
    _Bool _isHidden;
    _Bool _manual;
    _Bool _representative;
    _Bool _clusterRejected;
    _Bool _hidden;
    int _nameSource;
    int _cloudNameSource;
    NSString *_assetUUID;
    NSString *_assetCloudGUID;
    double _centerX;
    double _centerY;
    double _size;
}

@property (copy, nonatomic) NSString *assetUUID;
@property (copy, nonatomic) NSString *assetCloudGUID;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double size;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic, getter=isManual) _Bool manual;
@property (nonatomic, getter=isRepresentative) _Bool representative;
@property (nonatomic, getter=isClusterRejected) _Bool clusterRejected;
@property (nonatomic) int nameSource;
@property (nonatomic) int cloudNameSource;
@property (nonatomic, readonly, getter=isHidden) _Bool isHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_detectedFacePropertiesToFetch;
+ (id)_detectedFaceRelationshipKeyPathsToPrefetch;
+ (id)_persistedFaceMetadataWithDetectedFace:(id)arg1 isKeyFace:(_Bool)arg2 isClusterRejected:(_Bool)arg3;
+ (id)_migrateDetectedFaces:(id)arg1 forPersonMetadata:(id)arg2 fromVersion:(unsigned long long)arg3;
+ (id)_persistedFacesWithUnarchiver:(id)arg1 key:(id)arg2;
+ (void)enumerateMatchedAssetsWithMetadata:(id)arg1 inContext:(id)arg2 withBlock:(CDUnknownBlockType)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_identifier;
- (id)_insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)arg1 personUUID:(id)arg2 isRejected:(_Bool)arg3;
- (id)matchingFaceInManagedObejctContext:(id)arg1;
- (_Bool)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 forConfirmedPersonUUID:(id)arg2 diff:(id *)arg3;
- (_Bool)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 forRejectedPersonUUID:(id)arg2 diff:(id *)arg3;
- (id)jsonDictionary;

@end
