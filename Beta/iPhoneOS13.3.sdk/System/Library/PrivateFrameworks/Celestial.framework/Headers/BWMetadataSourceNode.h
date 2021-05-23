/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWSourceNode.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface BWMetadataSourceNode : BWSourceNode

{
    _Bool _running;
    struct opaqueCMFormatDescription *_formatDescription;
    struct OpaqueCMClock *_clock;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
}

@property (nonatomic, readonly) struct opaqueCMFormatDescription *formatDescription;

+ (void)initialize;

- (void)dealloc;
- (_Bool)start:(id *)arg1;
- (_Bool)stop:(id *)arg1;
- (struct OpaqueCMClock *)clock;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 clock:(struct OpaqueCMClock *)arg2;
- (id)nodeSubType;
- (void)appendMetadataSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
