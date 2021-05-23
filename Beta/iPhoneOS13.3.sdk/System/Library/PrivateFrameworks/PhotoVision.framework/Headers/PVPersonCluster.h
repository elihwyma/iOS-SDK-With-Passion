/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@protocol PVFaceGroupProtocol, PVFaceProtocol, PVPersonProtocol, PVPhotoLibraryProtocol;

@interface PVPersonCluster : NSObject

{
    unsigned long long _hash;
    _Bool _highlyInteresting;
    _Bool _quarantined;
    id <PVPhotoLibraryProtocol> _photoLibrary;
    id <PVPersonProtocol> _sourcePerson;
    id <PVFaceGroupProtocol> _sourceFaceGroup;
    NSMutableSet *_mergedPersonIdentifiers;
    NSMutableSet *_backingFaceIdentifiers;
    NSMutableSet *_backingAssetIdentifiers;
    NSSet *_sourcePersonBackingAssetIdentifiers;
    NSMutableSet *_backingMomentIdentifiers;
    double _interestingScore;
    NSMutableDictionary *_backingFaceIdentifiersByMomentIdentifiers;
    NSMutableDictionary *_representativeFaceByFaceIdentifiers;
    NSDate *_lastSeenDate;
    NSDate *_firstSeenDate;
}

@property (weak, nonatomic) id <PVPhotoLibraryProtocol> photoLibrary;
@property (retain, nonatomic) NSDate *lastSeenDate;
@property (retain, nonatomic) NSDate *firstSeenDate;
@property (retain, nonatomic) id <PVPersonProtocol> sourcePerson;
@property (retain, nonatomic) id <PVFaceGroupProtocol> sourceFaceGroup;
@property (retain, nonatomic) NSSet *sourcePersonBackingAssetIdentifiers;
@property (retain, nonatomic) NSMutableSet *mergedPersonIdentifiers;
@property (retain, nonatomic) NSMutableSet *backingFaceIdentifiers;
@property (retain, nonatomic) NSMutableSet *backingAssetIdentifiers;
@property (retain, nonatomic) NSMutableSet *backingMomentIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *backingFaceIdentifiersByMomentIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *representativeFaceByFaceIdentifiers;
@property (nonatomic) double interestingScore;
@property (nonatomic) _Bool highlyInteresting;
@property (nonatomic) _Bool quarantined;
@property (nonatomic, readonly) double libraryTimespan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) unsigned long long faceCount;
@property (nonatomic, readonly) _Bool favorite;
@property (nonatomic, readonly) _Bool hidden;
@property (nonatomic, readonly) NSString *anonymizedName;
@property (nonatomic, readonly) long long verifiedType;
@property (nonatomic) _Bool isVerified;
@property (nonatomic) long long manualOrder;
@property (retain, nonatomic) id <PVFaceProtocol> keyFace;

- (_Bool)isEqual:(id)arg1;
- (void)invalidateCaches;
- (id)personLocalIdentifiers;
- (void)pv_addMergeCandidatePersons:(id)arg1;
- (id)initWithPerson:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)initWithFaceGroup:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)fetchFaces;
- (id)fetchAssets;
- (id)fetchMoments;
- (void)_cacheDates;

@end
