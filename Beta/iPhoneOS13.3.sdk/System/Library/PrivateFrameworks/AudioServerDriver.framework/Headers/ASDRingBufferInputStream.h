/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@protocol ASDManagedRingBuffer;

@interface ASDRingBufferInputStream

{
    struct unique_ptr<ASDBufferList, std::__1::default_delete<ASDBufferList>> _bufferList;
    id <ASDManagedRingBuffer> _ringBuffer;
}

@property (nonatomic, readonly) id <ASDManagedRingBuffer> ringBuffer;

- (id).cxx_construct;
- (void)stopStream;
- (void)startStream;
- (CDUnknownBlockType)readInputBlock;
- (id)initWithDirection:(unsigned int)arg1 withPlugin:(id)arg2;
- (void)setPhysicalFormat:(id)arg1;
- (id)initWithRingBuffer:(id)arg1 withPlugin:(id)arg2;

@end
