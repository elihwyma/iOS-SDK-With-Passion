/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MontrealNNDescription.h>

@class NSNumber, NSString;

@interface MontrealNNModelOptimizerParam : MontrealNNDescription

{
    float _learningRate;
    float _momentum;
    unsigned long long _optimizerType;
    NSNumber *_gradientClipMin;
    NSNumber *_gradientClipMax;
}

@property (readonly) unsigned long long optimizerType;
@property (readonly) float learningRate;
@property (readonly) float momentum;
@property (readonly) NSNumber *gradientClipMin;
@property (readonly) NSNumber *gradientClipMax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDictionary:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)initWithOptimizerType:(unsigned long long)arg1 learningRate:(float)arg2 momentum:(float)arg3 gradientClipMin:(id)arg4 gradientClipMax:(id)arg5;

@end
