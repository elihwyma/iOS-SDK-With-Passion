/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNPersonsModel.h>

@class NSString, VNPersonsModelFaceModel;

__attribute__((visibility("hidden")))
@interface VNReadOnlyPersonsModel : VNPersonsModel

{
    VNPersonsModelFaceModel *_faceModel_DO_NOT_ACCESS_DIRECTLY;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id *)arg3;

- (id)upToDateFaceModelWithCanceller:(id)arg1 error:(id *)arg2;
- (unsigned long long)personCount;
- (id)personUniqueIdentifiers;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (id)faceCountsForAllPersons;
- (unsigned long long)numberOfPersonsInPersonsModel:(id)arg1;
- (id)personsModel:(id)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)personsModel:(id)arg1 indexOfPersonWithUniqueIdentifier:(id)arg2;
- (unsigned long long)personsModel:(id)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2;
- (id)personsModel:(id)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3;
- (id)initWithConfiguration:(id)arg1 faceModel:(id)arg2;

@end
