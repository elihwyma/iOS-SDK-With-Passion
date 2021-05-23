/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class _DPBiasedCoin, _DPRandomBitPositionGenerator;

@interface _DPOBHRandomizer : NSObject

{
    unsigned long long _m;
    double _epsilon;
    _DPBiasedCoin *_epsilonCoin;
    _DPRandomBitPositionGenerator *_bitPositionGenerator;
    double _cEpsilon;
}

@property (nonatomic, readonly) unsigned long long m;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) _DPBiasedCoin *epsilonCoin;
@property (nonatomic, readonly) _DPRandomBitPositionGenerator *bitPositionGenerator;
@property (nonatomic, readonly) double cEpsilon;

+ (id)obhRandomizerWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2;

- (id)init;
- (id)description;
- (id)initWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2;
- (_Bool)getBitValueAtIndex:(unsigned long long)arg1 forString:(id)arg2;
- (id)randomizedBitForString:(id)arg1;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;

@end
