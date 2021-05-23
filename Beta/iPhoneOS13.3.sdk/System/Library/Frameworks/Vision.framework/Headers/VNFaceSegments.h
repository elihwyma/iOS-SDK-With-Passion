/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary;

@interface VNFaceSegments : NSObject

{
    unsigned long long _requestRevision;
    unsigned long long _outputBufferWidth;
    unsigned long long _outputBufferHeight;
    NSData *_outputBufferData;
    unsigned long long _numberOfFaceSegments;
    struct CGRect _boundingBox;
    NSDictionary *_faceSegmentLabelToProbabilityMap;
    vector_7584168e _probabilityNormSums;
}

@property (nonatomic, readonly) unsigned long long outputBufferWidth;
@property (nonatomic, readonly) unsigned long long outputBufferHeight;
@property (nonatomic, readonly) NSData *outputBufferData;
@property (nonatomic, readonly) unsigned long long numberOfFaceSegments;
@property (nonatomic, readonly) NSDictionary *faceSegmentLabelToProbabilityMap;
@property (nonatomic, readonly) struct CGRect boundingBox;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (_Bool)supportsSecureCoding;
+ (id)faceSegmentToSegmentMaskGrayLevelDictionary;
+ (id)faceSegmentIndexToFlagMap;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (struct __CVBuffer *)createMaskImageOfFaceSegments:(unsigned long long)arg1 error:(id *)arg2;
- (struct __CVBuffer *)createProbabilityImageOfFaceSegment:(unsigned long long)arg1 region:(struct CGRect)arg2 normalize:(_Bool)arg3 error:(id *)arg4;
- (id)initWithRequestRevision:(unsigned long long)arg1 outputBufferWidth:(unsigned long long)arg2 outputBufferHeight:(unsigned long long)arg3 outputBufferData:(id)arg4 numberOfFaceSegments:(unsigned long long)arg5 faceSegmentBBox:(struct CGRect)arg6 faceSegmentLabelToProbabilityMap:(id)arg7;
- (struct __CVBuffer *)createProbabilityImageOfFaceSegment:(unsigned long long)arg1 error:(id *)arg2;
- (struct CGRect)_normalizeRegion:(struct CGRect)arg1;
- (struct vImage_Buffer)_makeFaceSegmentProbabilityDataImageBuffer:(id)arg1 rect:(struct CGRect)arg2;
- (struct __CVBuffer *)_createFaceSegmentProabilityDataPixelBufferWithSize:(struct CGSize)arg1 error:(id *)arg2;
- (void)_calculateProbabilityNormalSumsForRect:(struct CGRect)arg1;

@end
