/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString;

@interface PLDeferredRebuildFace : PLManagedObject

@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly, getter=isManual) _Bool manual;
@property (nonatomic, readonly, getter=isRepresentative) _Bool representative;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double centerX;
@property (nonatomic, readonly) double centerY;
@property (nonatomic, readonly) double size;
@property (nonatomic, readonly) int nameSource;
@property (nonatomic, readonly) int cloudNameSource;
@property (nonatomic, readonly, getter=isClusterRejected) _Bool clusterRejected;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *faceUUID;
@property (copy, nonatomic) NSString *assetCloudGUID;
@property (copy, nonatomic) NSString *assetUUID;
@property (copy, nonatomic) NSString *personUUID;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double size;
@property (nonatomic) _Bool hidden;
@property (nonatomic) _Bool manual;
@property (nonatomic) _Bool representative;
@property (nonatomic) _Bool rejected;
@property (nonatomic) _Bool clusterRejected;
@property (nonatomic) int nameSource;
@property (nonatomic) int cloudNameSource;
@property (nonatomic) int faceAlgorithmVersion;

+ (id)entityName;
+ (id)deferredFacesWithAssetCloudGUID:(id)arg1 inManagedObjectContext:(id)arg2;

- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;

@end
