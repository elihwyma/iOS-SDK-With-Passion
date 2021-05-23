/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWFanOutNode.h>

@class BWNodeOutput, NSArray, NSDictionary, NSSet;

@interface BWFaceDetectionNode : BWFanOutNode

{
    BWNodeOutput *_metadataObjectOutput;
    NSArray *_boxedMetadataOutputs;
    struct CGRect _rectOfInterest;
    struct os_unfair_lock_s _rectOfInterestLock;
    _Bool _metadataObjectOutputEnabled;
    _Bool _boxedMetadataOutputEnabled;
    NSSet *_enabledDetectedObjectTypes;
    int _lastObjectFaceCount;
    int _lastDetectedObjectsCount;
    unsigned int _localIDsForFaces_BE[5];
    unsigned int _localIDsForDetectedHumanBodies_BE[3];
    unsigned int _localIDsForDetectedCatBodies_BE[3];
    unsigned int _localIDsForDetectedDogBodies_BE[3];
    unsigned int _localIDsForDetectedSalientObjects_BE[3];
    NSDictionary *_detectionTimingInfoByBoxedOutput;
    unsigned int _localIDOfDetectedFace_BE;
    unsigned int _localIDOfDetectedFaceFaceID_BE;
    unsigned int _localIDOfDetectedFaceBounds_BE;
    unsigned int _localIDOfDetectedFaceRoll_BE;
    unsigned int _localIDOfDetectedFaceYaw_BE;
    struct OpaqueCMBlockBuffer *_emptyMetadataSampleData;
    CDStruct_1b6d18a9 _prevBoxedFacePTS;
    CDStruct_1b6d18a9 _prevBoxedFaceDur;
    CDStruct_1b6d18a9 _prevBoxedNoFacePTS;
    int _lastBoxedFaceCount;
    unsigned int _recordCollectionAtomIdentifier_BE;
    unsigned int _collectionItemsAtomIdentifier_BE;
}

@property (readonly) BWNodeOutput *metadataObjectOutput;
@property (readonly) NSArray *boxedMetadataOutputs;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (struct CGRect)rectOfInterest;
- (void)setRectOfInterest:(struct CGRect)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (int)_populateLocalIDsForFacesWithFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (int)_populateLocalIDsForHumanBodiesWithFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (int)_populateLocalIDsForCatBodiesWithFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (int)_populateLocalIDsForDogBodiesWithFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (int)_populateLocalIDsForSalientObjectsWithFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)_addFacesArray:(id)arg1 toSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)_renderSampleBufferForBoxedMetadataOutput:(struct opaqueCMSampleBuffer *)arg1 withFaceArray:(id)arg2;
- (void)_renderSampleBufferForBoxedMetadataOutput:(struct opaqueCMSampleBuffer *)arg1 withDetectedObjectsInfo:(id)arg2;
- (_Bool)_addDetectedObjectsInfo:(id)arg1 toSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)_renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forBoxedMetadataOutput:(id)arg2 withDetectedObjectsInfo:(id)arg3;
- (unsigned int *)localIDsForKey:(id)arg1;
- (unsigned long long)append:(id)arg1 toBoxedData:(char *)arg2 localIDs:(unsigned int *)arg3 isFace:(_Bool)arg4;
- (struct OpaqueCMBlockBuffer *)_getEmptyMetadataSampleData;
- (id)initWithObjectMetadataIdentifiers:(id)arg1 movieFileOutputMetadataIdentifierGroups:(id)arg2;
- (void)setMetadataObjectOutputEnabled:(_Bool)arg1;
- (_Bool)metadataObjectOutputEnabled;
- (void)setBoxedMetadataOutputEnabled:(_Bool)arg1;
- (_Bool)boxedMetadataOutputEnabled;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;

@end
