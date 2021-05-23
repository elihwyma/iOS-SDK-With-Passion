/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@interface _DPCMSRandomizer : NSObject

{
    double _epsilon;
    unsigned long long _m;
    unsigned long long _k;
    double _fragmentEpsilon;
    unsigned long long _fragmentM;
    unsigned long long _fragmentK;
}

@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) unsigned long long m;
@property (nonatomic, readonly) unsigned long long k;
@property (nonatomic, readonly) double fragmentEpsilon;
@property (nonatomic, readonly) unsigned long long fragmentM;
@property (nonatomic, readonly) unsigned long long fragmentK;

+ (id)randomizerWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3 fragmentEpsilon:(double)arg4 fragmentBitCount:(unsigned long long)arg5 fragmentHashFunctionCount:(unsigned long long)arg6;
+ (id)randomizerWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3;

- (id)init;
- (id)description;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)initWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3 fragmentEpsilon:(double)arg4 fragmentBitCount:(unsigned long long)arg5 fragmentHashFunctionCount:(unsigned long long)arg6;
- (id)initWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3;
- (id)cmsSampleForString:(id)arg1;
- (id)cmsSampleForFragment:(id)arg1;

@end
