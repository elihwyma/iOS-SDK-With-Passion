/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface PASNeuralNetwork : NSObject

{
    NSData *_data;
    const char *_dataBytes;
    unsigned long long _nlayers;
    const struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned char _field5;
        unsigned char _field6;
        unsigned char _field7;
        unsigned char _field8;
    } *_layers;
}

@property (nonatomic, readonly) unsigned long long inputSize;
@property (nonatomic, readonly) unsigned long long outputSize;

- (id)init;
- (id)initWithData:(id)arg1;
- (double)predict:(const double *)arg1;
- (double)predict32:(const float *)arg1;
- (float *)_runOnInputs:(float *)arg1 freeInputsAfterUse:(_Bool)arg2;
- (double)_predict:(float *)arg1 freeInputsAfterUse:(_Bool)arg2;
- (void)forInputs:(const float *)arg1 computeOutputLayer:(float *)arg2;

@end
