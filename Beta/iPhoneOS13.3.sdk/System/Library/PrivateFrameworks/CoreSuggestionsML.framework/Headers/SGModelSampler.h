/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class _PASRng;

@interface SGModelSampler : NSObject

{
    double _positiveRate;
    double _negativeRate;
    _PASRng *_rng;
}

- (_Bool)shouldSampleForLabel:(id)arg1;
- (id)initWithPositiveRate:(double)arg1 negativeRate:(double)arg2 rng:(id)arg3;

@end
