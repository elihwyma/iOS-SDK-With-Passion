/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSArray, VNClassificationObservation;

@interface VNFaceAttributeCategory : NSObject

{
    VNClassificationObservation *_mostLikelyLabel;
    NSArray *_allLabelsWithConfidences;
    unsigned long long _requestRevision;
}

@property (copy, nonatomic) VNClassificationObservation *label;
@property (copy, nonatomic) NSArray *allLabelsWithConfidences;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_computeLabel;
- (id)initWithRequestRevision:(unsigned long long)arg1;

@end
