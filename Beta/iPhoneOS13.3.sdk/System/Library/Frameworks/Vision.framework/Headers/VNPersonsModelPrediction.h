/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class VNFaceObservation;

@protocol NSObject><NSCopying><NSSecureCoding;

@interface VNPersonsModelPrediction : NSObject

{
    VNFaceObservation *_faceObservation;
    id <NSObject><NSCopying><NSSecureCoding> _predictedPersonUniqueIdentifier;
    float _confidence;
}

@property (nonatomic, readonly) VNFaceObservation *faceObservation;
@property (copy, nonatomic, readonly) id <NSObject><NSCopying><NSSecureCoding> predictedPersonUniqueIdentifier;
@property (nonatomic, readonly) float confidence;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceObservation:(id)arg1 predictedPersonUniqueIdentifier:(id)arg2 confidence:(float)arg3;

@end
