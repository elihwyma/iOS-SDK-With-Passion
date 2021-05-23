/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@class ASDAudioDevice, NSArray, NSObject;

@protocol OS_dispatch_queue;

@interface ASDSRCStream

{
    ASDAudioDevice *_owningDevice;
    struct unique_ptr<ASDSRCStreamHelper, std::__1::default_delete<ASDSRCStreamHelper>> _streamHelper;
    NSObject<OS_dispatch_queue> *_srcQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    _Bool _isRunning;
    long long _maximumFramesPerIOCycle;
    long long _ioReferenceCount;
    NSArray *_underlyingStreams;
}

@property (copy, nonatomic) NSArray *underlyingStreams;
@property (nonatomic, readonly) long long maximumFramesPerIOCycle;

- (id).cxx_construct;
- (void)stopStream;
- (void)startStream;
- (CDUnknownBlockType)readInputBlock;
- (CDUnknownBlockType)writeMixBlock;
- (id)initWithDirection:(unsigned int)arg1 withPlugin:(id)arg2;
- (void)_updateMaximumFramesPerIOCycle;
- (_Bool)_allocateStreamingResources;
- (void)_deallocateStreamingResources;
- (void)_updateLatency;
- (id)initWithOwningDevice:(id)arg1 underlyingStreams:(id)arg2 direction:(unsigned int)arg3 plugin:(id)arg4;
- (_Bool)changePhysicalFormat:(id)arg1;
- (void)updateLatency;

@end
