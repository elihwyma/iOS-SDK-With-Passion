/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@interface _DPBiasedCoin : NSObject

{
    double _bias;
}

@property (nonatomic, readonly) double bias;

+ (id)coinWithBias:(double)arg1;
+ (double)sanitizedProbability:(double)arg1;

- (id)init;
- (id)description;
- (_Bool)flip;
- (unsigned char)generateByte;
- (id)initWithBias:(double)arg1;

@end
