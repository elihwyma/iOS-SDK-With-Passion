/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWSourceNode.h>

@class CMMotionManager, NSObject;

@protocol OS_dispatch_queue;

@interface BWCoreMotionMetadataSourceNode : BWSourceNode

{
    CMMotionManager *_motionManager;
    int _bufferGenerationRate;
    int _samplesPerBuffer;
    _Bool _running;
    struct BWCoreMotionMetadataSampleData *_sampleDataForBuffer;
    int _numSamplesInBuffer;
    struct opaqueCMFormatDescription *_boxedMetadataFormatDescription;
    unsigned int _localIDOfCoreMotionMetadata_BE;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
    struct opaqueCMFormatDescription *_formatDescription;
}

@property (nonatomic, readonly) struct opaqueCMFormatDescription *formatDescription;

+ (void)initialize;
+ (int)extractBWCoreMotionMetadataFromBlockBuffer:(struct OpaqueCMBlockBuffer *)arg1 intoNativeEndianSampleData:(struct BWCoreMotionMetadataSampleData *)arg2;
+ (int)extractBWCoreMotionMetadataFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 intoNativeEndianSampleData:(struct BWCoreMotionMetadataSampleData *)arg2;

- (void)dealloc;
- (_Bool)start:(id *)arg1;
- (_Bool)stop:(id *)arg1;
- (struct OpaqueCMClock *)clock;
- (id)nodeSubType;
- (void)_emitMetadataSampleBuffer;
- (id)initWithBufferGenerationRate:(int)arg1 samplesPerBuffer:(int)arg2;

@end
