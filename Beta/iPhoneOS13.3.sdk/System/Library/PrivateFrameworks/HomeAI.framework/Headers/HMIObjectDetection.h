/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSObject.h>

@interface HMIObjectDetection : NSObject

{
    int _labelIndex;
    double _confidence;
    struct CGRect _boundingBox;
}

@property (readonly) int labelIndex;
@property (readonly) double confidence;
@property (nonatomic, readonly) struct CGRect boundingBox;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabelIndex:(int)arg1 confidence:(double)arg2 unclampedBoundingBox:(struct CGRect)arg3;
- (id)initWithLabelIndex:(int)arg1 confidence:(double)arg2 boundingBox:(struct CGRect)arg3;

@end
