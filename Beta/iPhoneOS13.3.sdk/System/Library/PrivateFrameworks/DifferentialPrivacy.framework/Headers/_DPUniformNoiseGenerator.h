/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@interface _DPUniformNoiseGenerator : NSObject

{
    double _minValue;
    double _range;
}

@property (nonatomic, readonly) double minValue;
@property (nonatomic, readonly) double range;

+ (id)generatorWithValueRange:(id)arg1;

- (id)init;
- (id)description;
- (double)sample;
- (id)initWithValueRange:(id)arg1;

@end
