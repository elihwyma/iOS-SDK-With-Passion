/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class _DPLaplaceNoiseGenerator;

@interface _DPNumberRandomizer : NSObject

{
    unsigned long long _range;
    double _epsilon;
    _DPLaplaceNoiseGenerator *_generator;
}

@property (nonatomic, readonly) unsigned long long range;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) _DPLaplaceNoiseGenerator *generator;

+ (id)numberRandomizerWithRange:(unsigned long long)arg1 epsilon:(double)arg2;

- (id)init;
- (id)description;
- (id)randomize:(id)arg1;
- (id)initWithRange:(unsigned long long)arg1 epsilon:(double)arg2;

@end
