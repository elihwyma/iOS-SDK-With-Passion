/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString;

@protocol VNPersonsModelDataDelegate;

__attribute__((visibility("hidden")))
@interface VNPersonsModelData : NSObject

{
    unsigned long long _maximumIdentities;
    unsigned long long _faceprintRequestRevision;
    NSMutableArray *_personUniqueIdentifiers;
    NSMutableDictionary *_personUniqueIdentifierToSerialNumberMapping;
    NSMutableDictionary *_serialNumberToFaceObservationsMapping;
    NSMutableIndexSet *_availablePersonSerialNumbers;
    NSDate *_lastModificationDate;
    id <VNPersonsModelDataDelegate> _delegate;
}

@property (weak, nonatomic) id <VNPersonsModelDataDelegate> delegate;
@property (nonatomic, readonly) NSDate *lastModificationDate;
@property (nonatomic, readonly) unsigned long long faceprintRequestRevision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithConfiguration:(id)arg1;
- (void)_modelWasModified;
- (_Bool)addFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)removeFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)removePersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;
- (unsigned long long)faceModelPersonsCount;
- (id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg1;
- (unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
- (id)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPersonsInPersonsModel:(id)arg1;
- (id)personsModel:(id)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)personsModel:(id)arg1 indexOfPersonWithUniqueIdentifier:(id)arg2;
- (unsigned long long)personsModel:(id)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2;
- (id)personsModel:(id)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3;
- (id)_requestNewIdentitySerialNumberAndReturnError:(id *)arg1;
- (id)_uniqueFaceObservationsWithRegistrationState:(_Bool)arg1 forFaceObservations:(id)arg2 withExpectedFaceprintRequestRevision:(unsigned long long)arg3 ofPersonWithUniqueIdentifier:(id)arg4 error:(id *)arg5;
- (_Bool)_addUniqueFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (void)_removeAllFaceObservationsFromIdentityWithSerialNumber:(id)arg1;
- (void)_removePersonWithUniqueIdentifier:(id)arg1;
- (void)_removeExistingFaceObservations:(id)arg1 fromIdentityWithSerialNumber:(id)arg2;
- (void)_removeExistingFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2;
- (id)_accessToMutableFaceObservationsForPersonAtIndex:(unsigned long long)arg1;

@end
