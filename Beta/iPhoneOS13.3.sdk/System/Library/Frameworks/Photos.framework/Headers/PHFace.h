/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHObject.h>

@class NSString;

@interface PHFace : PHObject

{
    _Bool _hidden;
    _Bool _inTrash;
    _Bool _manual;
    _Bool _hasSmile;
    _Bool _leftEyeClosed;
    _Bool _rightEyeClosed;
    short _confirmedFaceCropGenerationState;
    unsigned short _ageType;
    unsigned short _genderType;
    unsigned short _eyesState;
    unsigned short _smileType;
    unsigned short _facialHairType;
    unsigned short _hairColorType;
    unsigned short _baldType;
    unsigned short _glassesType;
    unsigned short _eyeMakeupType;
    unsigned short _lipMakeupType;
    int _trainingType;
    double _size;
    double _centerX;
    double _centerY;
    long long _clusterSequenceNumber;
    long long _qualityMeasure;
    double _quality;
    NSString *_personUUID;
    long long _sourceWidth;
    long long _sourceHeight;
    double _leftEyeX;
    double _leftEyeY;
    double _rightEyeX;
    double _rightEyeY;
    double _mouthX;
    double _mouthY;
    double _roll;
    double _yaw;
    double _blurScore;
    id _adjustmentVersion;
    long long _nameSource;
    double _poseYaw;
    long long _faceAlgorithmVersion;
}

@property (nonatomic, readonly) NSString *personUUID;
@property (nonatomic, readonly) short confirmedFaceCropGenerationState;
@property (nonatomic, readonly) long long sourceWidth;
@property (nonatomic, readonly) long long sourceHeight;
@property (nonatomic, readonly) double leftEyeX;
@property (nonatomic, readonly) double leftEyeY;
@property (nonatomic, readonly) double rightEyeX;
@property (nonatomic, readonly) double rightEyeY;
@property (nonatomic, readonly) double mouthX;
@property (nonatomic, readonly) double mouthY;
@property (nonatomic, readonly) double roll;
@property (nonatomic, readonly) double yaw;
@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly, getter=isInTrash) _Bool inTrash;
@property (nonatomic, readonly) _Bool manual;
@property (nonatomic, readonly) _Bool hasSmile;
@property (nonatomic, readonly) double blurScore;
@property (nonatomic, readonly, getter=isLeftEyeClosed) _Bool leftEyeClosed;
@property (nonatomic, readonly, getter=isRightEyeClosed) _Bool rightEyeClosed;
@property (copy, nonatomic, readonly) id adjustmentVersion;
@property (nonatomic, readonly) long long nameSource;
@property (nonatomic, readonly) int trainingType;
@property (nonatomic, readonly, getter=isConfirmedFaceCropGenerationPending) _Bool confirmedFaceCropGenerationPending;
@property (nonatomic) double poseYaw;
@property (nonatomic) long long faceAlgorithmVersion;
@property (nonatomic, readonly) NSString *personLocalIdentifier;
@property (nonatomic, readonly) unsigned short ageType;
@property (nonatomic, readonly) unsigned short genderType;
@property (nonatomic, readonly) unsigned short eyesState;
@property (nonatomic, readonly) unsigned short smileType;
@property (nonatomic, readonly) unsigned short facialHairType;
@property (nonatomic, readonly) unsigned short hairColorType;
@property (nonatomic, readonly) unsigned short baldType;
@property (nonatomic, readonly) unsigned short glassesType;
@property (nonatomic, readonly) unsigned short eyeMakeupType;
@property (nonatomic, readonly) unsigned short lipMakeupType;
@property (nonatomic, readonly) double size;
@property (nonatomic, readonly) double centerX;
@property (nonatomic, readonly) double centerY;
@property (nonatomic, readonly) long long clusterSequenceNumber;
@property (nonatomic, readonly) long long qualityMeasure;
@property (nonatomic, readonly) double quality;

+ (id)fetchSuggestedFacesForPerson:(id)arg1 options:(id)arg2;
+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierCode;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)corePropertiesToFetch;
+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (_Bool)managedObjectSupportsFaceState;
+ (id)croppingPropertiesToFetch;
+ (id)personBuilderPropertiesToFetch;
+ (id)fetchFacesWithOptions:(id)arg1;
+ (id)fetchFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchFacesInAsset:(id)arg1 options:(id)arg2;
+ (id)fetchFacesInAssets:(id)arg1 options:(id)arg2;
+ (id)fetchFacesForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchKeyFaceForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchFacesOnAssetWithFace:(id)arg1 options:(id)arg2;
+ (id)fetchFacesInFaceGroup:(id)arg1 options:(id)arg2;
+ (id)fetchKeyFaceForFaceGroup:(id)arg1 options:(id)arg2;
+ (id)fetchSingletonFacesWithOptions:(id)arg1;
+ (id)fetchRejectedFacesForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchFacesForFaceCrop:(id)arg1 options:(id)arg2;
+ (id)fetchFacesForPersonsAssociatedWithFaceGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 options:(id)arg2;
+ (id)fetchKeyFacesGroupedByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 fetchOptions:(id)arg2;
+ (id)fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchKeyFacesGroupedByPersons:(id)arg1;

- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;
- (void)fetchPropertySetsIfNeeded;
- (id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2;
- (id)_createPropertyObjectOfClass:(Class)arg1;
- (id)faceClusteringProperties;

@end
