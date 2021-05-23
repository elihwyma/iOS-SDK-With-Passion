/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNObservation.h>

@class NSString;

@protocol VNOperationPointsProviding;

@interface VNClassificationObservation : VNObservation

{
    NSString *_identifier;
    id <VNOperationPointsProviding> _operationPointsProvider;
}

@property (copy, nonatomic, readonly) NSString *identifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)operationPointsAndReturnError:(id *)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 identifier:(id)arg2 confidence:(float)arg3;
- (id)initWithRequestRevision:(unsigned long long)arg1 identifier:(id)arg2 confidence:(float)arg3 operationPointsProvider:(id)arg4;
- (_Bool)hasPrecisionRecallCurve;
- (_Bool)hasMinimumRecall:(float)arg1 forPrecision:(float)arg2;
- (_Bool)hasMinimumPrecision:(float)arg1 forRecall:(float)arg2;

@end
