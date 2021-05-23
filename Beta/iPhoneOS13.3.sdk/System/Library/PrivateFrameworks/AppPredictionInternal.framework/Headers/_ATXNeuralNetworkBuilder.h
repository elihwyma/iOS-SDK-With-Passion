/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableData;

@interface _ATXNeuralNetworkBuilder : NSObject

{
    unsigned long long _prevSize;
    unsigned long long _nlayers;
    NSMutableData *_descriptors;
    NSMutableArray *_weightsAndBiases;
    _Bool _haveOutputLayer;
    _Bool _done;
}

- (id)init;
- (id)serialize;
- (id)initWithInputSize:(unsigned long long)arg1;
- (void)addHiddenLayer:(unsigned long long)arg1 weights:(const float *)arg2 bias:(const float *)arg3 activation:(unsigned char)arg4 skip:(_Bool)arg5;
- (void)addOutputLayer:(unsigned long long)arg1 weights:(const float *)arg2 bias:(const float *)arg3 activation:(unsigned char)arg4 softmax:(_Bool)arg5;

@end
