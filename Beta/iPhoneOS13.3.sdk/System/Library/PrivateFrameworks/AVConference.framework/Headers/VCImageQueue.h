/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCImageQueue : NSObject

{
    struct _CAImageQueue *_caQueue;
    struct OpaqueFigImageQueue *_figQueue;
    struct _opaque_pthread_mutex_t _enqueueLock;
    unsigned int _slot;
    unsigned int _frameRate;
    _Bool _imageQueueProtected;
    _Bool _isLowLatencyEnabled;
    long long _streamToken;
    unsigned int _enqueuedFrameCount;
}

@property unsigned int frameRate;
@property _Bool imageQueueProtected;
@property long long streamToken;
@property (nonatomic, getter=isLowLatencyEnabled) _Bool lowLatencyEnabled;

+ (id)drawingContext;

- (void)dealloc;
- (void)pause;
- (void)stop;
- (void)start;
- (id)initWithFrameRate:(unsigned char)arg1 imageQueueProtected:(_Bool)arg2;
- (id)initWithFrameRate:(unsigned char)arg1;
- (unsigned int)setVideoDestination:(id)arg1;
- (void)getQueueRepresentation:(void *)arg1;
- (void)copyPerformanceDictionary:(const struct __CFDictionary **)arg1;
- (void)createAndCopyLatencyStatsDictionary:(const struct __CFDictionary **)arg1;
- (_Bool)enqueueFrame:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2;

@end
