/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@protocol _DPStringRandomizer;

@interface _DPStringRandomizer : NSObject

{
    id <_DPStringRandomizer> _randomizer;
    unsigned long long _algorithm;
}

@property (nonatomic, readonly) unsigned long long algorithm;
@property (nonatomic, readonly) id <_DPStringRandomizer> randomizer;

+ (id)stringRandomizerWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 algorithmParameters:(id)arg4;

- (id)init;
- (id)description;
- (id)initWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 algorithmParameters:(id)arg4;

@end
