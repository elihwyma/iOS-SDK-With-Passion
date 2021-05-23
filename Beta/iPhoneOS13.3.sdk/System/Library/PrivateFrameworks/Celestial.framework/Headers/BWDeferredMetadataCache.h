/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWDeferredMetadataCache : NSObject

{
    struct OpaqueFigSimpleMutex *_lock;
    struct OpaqueFigCaptureStream *_stream;
    int _numberOfExpectedSampleBuffersForEachPTS;
    struct BWDeferredMetadataCacheEntry _cache[5];
}

@property (nonatomic) int numberOfExpectedSampleBuffersForEachPTS;

- (void)dealloc;
- (void)flush;
- (id)initWithCaptureStream:(struct OpaqueFigCaptureStream *)arg1 atomicTransactions:(_Bool)arg2;
- (void)addMetadataAttachmentToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withDutyCycleMetadataCache:(id)arg2;

@end
