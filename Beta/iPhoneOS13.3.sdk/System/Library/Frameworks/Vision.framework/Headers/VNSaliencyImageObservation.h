/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNPixelBufferObservation.h>

@class NSArray;

@interface VNSaliencyImageObservation : VNPixelBufferObservation

{
    struct CGSize _mOriginalImageSize;
    struct CGRect _mSalientRegion;
    struct CGRect _mHighlySalientRegion;
    struct os_unfair_lock_s _mComputeBoundingBoxesLock;
    NSArray *_mSalientObjects;
}

@property (nonatomic, readonly) struct CGRect boundingBox;
@property (nonatomic, readonly) struct CGRect narrowedBoundingBox;
@property (nonatomic, readonly) NSArray *salientObjects;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct __CVBuffer *)createSaliencyImageAndReturnError:(id *)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 rawSaliencyImage:(struct __CVBuffer *)arg2 originalImageSize:(struct CGSize)arg3 salientObjectBoundingBoxes:(id)arg4;
- (id)salientObjectsAndReturnError:(id *)arg1;
- (void)_computeBoundingBoxes;

@end
