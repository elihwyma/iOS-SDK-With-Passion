/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SpeexEndpointer : NSObject

{
    double mStartWaitTime;
    double mInterspeechWaitTime;
    double mEndWaitTime;
    int mEndpointMode;
    unsigned int mFrameRate;
    int mLastStatus;
    void *_impl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property int endpointMode;
@property double startWaitTime;
@property double interspeechWaitTime;
@property double endWaitTime;

- (id)init;
- (void)dealloc;
- (void)reset;
- (_Bool)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned int)arg2;
- (_Bool)configureWithASBD:(struct AudioStreamBasicDescription *)arg1 andFrameRate:(unsigned int)arg2;
- (int)getStatus:(struct AudioQueueBuffer *)arg1;
- (int)getStatus:(float *)arg1 count:(unsigned int)arg2;

@end
