/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNEspressoModelImageprint.h>

@class VNFaceprint, VNTorsoprint;

@interface VNFaceTorsoprint : VNEspressoModelImageprint

{
    VNFaceprint *_faceprint;
    VNTorsoprint *_torsoprint;
}

@property (nonatomic, readonly) VNFaceprint *faceprint;
@property (nonatomic, readonly) VNTorsoprint *torsoprint;
@property (nonatomic, readonly, getter=isValidTorsoprint) _Bool validTorsoprint;

+ (_Bool)supportsSecureCoding;
+ (id)currentVersion;
+ (unsigned int)currentCodingVersion;
+ (id)codingTypesToCodingKeys;
+ (unsigned long long)currentSerializationVersion;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 requestRevision:(unsigned long long)arg6;
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 validTorsoprint:(_Bool)arg6 requestRevision:(unsigned long long)arg7;
- (id)initWithFaceprint:(id)arg1 torsoPrint:(id)arg2 requestRevision:(unsigned long long)arg3;
- (id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithState:(id)arg1 error:(id *)arg2;
- (id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (id)serializeStateAndReturnError:(id *)arg1;
- (unsigned long long)serializedLength;

@end
