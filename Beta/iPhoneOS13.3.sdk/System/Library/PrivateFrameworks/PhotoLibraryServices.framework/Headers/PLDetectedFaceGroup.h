/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSSet, NSString, PLDetectedFace, PLPerson;

@interface PLDetectedFaceGroup : PLManagedObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSSet *detectedFaces;
@property (nonatomic) int unnamedFaceCount;
@property (retain, nonatomic) PLPerson *associatedPerson;
@property (retain, nonatomic) PLDetectedFace *keyFace;
@property (nonatomic) int personBuilderState;

+ (id)entityName;
+ (id)detectedFaceGroupWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)batchFetchFaceGroupByFaceUUIDWithFaceUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(CDUnknownBlockType)arg4;

- (void)awakeFromInsert;
- (void)willSave;
- (id)mutableDetectedFaces;
- (void)refreshFaces;

@end
