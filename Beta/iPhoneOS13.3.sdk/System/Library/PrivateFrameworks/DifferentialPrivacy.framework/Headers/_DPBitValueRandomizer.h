/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class _DPBiasedCoin;

@interface _DPBitValueRandomizer : NSObject

{
    unsigned long long _p;
    double _epsilon;
    _DPBiasedCoin *_epsilonCoin;
}

@property (nonatomic, readonly) unsigned long long p;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) _DPBiasedCoin *epsilonCoin;

+ (id)bitValueRandomizerWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2;

- (id)init;
- (id)description;
- (id)initWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)randomize:(id)arg1;

@end
