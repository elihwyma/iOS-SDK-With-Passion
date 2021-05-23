/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@interface _CDPSimpleModelParameterManagerTuningValue : NSObject

{
    float _lambda;
    float _w0;
    float _threshold;
    float _score;
}

@property (nonatomic, readonly) float lambda;
@property (nonatomic, readonly) float w0;
@property (nonatomic, readonly) float threshold;
@property (nonatomic, readonly) float score;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLambda:(float)arg1 w0:(float)arg2 threshold:(float)arg3 score:(float)arg4;

@end
