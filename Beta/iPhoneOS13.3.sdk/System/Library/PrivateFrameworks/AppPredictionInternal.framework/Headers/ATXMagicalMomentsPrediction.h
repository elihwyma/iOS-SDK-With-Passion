/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ATXMagicalMomentsPrediction : NSObject

{
    NSString *_predictionIdentifier;
    double _confidence;
}

@property (nonatomic, readonly) NSString *predictionIdentifier;
@property (nonatomic, readonly) double confidence;

+ (_Bool)supportsSecureCoding;
+ (id)convertPredictionsToPMMPredictionItems:(id)arg1 reason:(unsigned int)arg2 anchor:(long long)arg3 triggerEvent:(id)arg4;
+ (id)pmmMetadataForDuetEvent:(id)arg1;
+ (long long)mmReasonToPMMReason:(unsigned int)arg1;
+ (long long)mmAnchorToPMMAnchor:(long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfidence:(double)arg1 predictionIdentifier:(id)arg2;

@end
