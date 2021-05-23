/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@interface _DPRandomBitPositionGenerator : NSObject

{
    unsigned long long _m;
}

@property (nonatomic, readonly) unsigned long long m;

+ (id)generatorWithDimensionality:(unsigned long long)arg1;

- (id)init;
- (id)description;
- (unsigned long long)sample;
- (id)initWithDimensionality:(unsigned long long)arg1;

@end
