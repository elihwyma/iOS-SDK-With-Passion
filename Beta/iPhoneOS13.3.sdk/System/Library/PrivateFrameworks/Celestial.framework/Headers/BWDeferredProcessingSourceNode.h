/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWSourceNode.h>

@class NSDictionary, NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

@interface BWDeferredProcessingSourceNode : BWSourceNode

{
    NSMutableDictionary *_outputsByPortType;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
    _Bool _running;
}

@property (nonatomic, readonly) NSDictionary *outputsByPortType;

+ (void)initialize;

- (void)dealloc;
- (_Bool)start:(id *)arg1;
- (_Bool)stop:(id *)arg1;
- (id)outputForPortType:(id)arg1;
- (id)initWithPortTypes:(id)arg1 attributes:(id)arg2;
- (id)portTypeForOutput:(id)arg1;
- (void)processBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
