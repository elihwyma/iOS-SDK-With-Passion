/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

#import <MediaServices/Swift-Protocol.h>

@interface MSVBloomFilter : NSObject <Swift>

{
    struct __CFBitVector *_vector;
    long long _vectorCapacity;
    unsigned long long _murmurSeed;
    long long _hashCount;
    float _falsePositiveTolerance;
    long long _capacity;
}

@property (nonatomic, readonly) long long capacity;
@property (nonatomic, readonly) float falsePositiveTolerance;
@property (nonatomic, readonly) float falsePositiveProbability;
@property (nonatomic, readonly) long long estimatedCount;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)addObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCapacity:(long long)arg1 falsePositiveTolerance:(float)arg2;
- (id)_vectorIndexSetForObject:(id)arg1;
- (unsigned long long)_fnvHashObject:(id)arg1;
- (unsigned long long)_murmur2HashObject:(id)arg1;
- (id)initWithCapacity:(long long)arg1 falsePositiveTolerance:(float)arg2 murmurSeed:(unsigned long long)arg3;

@end
