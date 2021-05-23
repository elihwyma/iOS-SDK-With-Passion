/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVMediaDataRequester, AVScheduledAudioParameters, AVWeakReference, NSError, NSString;

__attribute__((visibility("hidden")))
@interface AVSampleBufferAudioRendererInternal : NSObject

{
    NSString *audioOutputDeviceUniqueID;
    NSString *audioTimePitchAlgorithm;
    struct {
        struct OpaqueFigSimpleMutex *mutex;
        AVMediaDataRequester *requester;
    } mediaDataRequester;
    float rate;
    float volume;
    _Bool muted;
    AVScheduledAudioParameters *scheduledAudioParameters;
    struct OpaqueCMTimebase *readOnlyControlTimebase;
    AVWeakReference *weakReferenceToSynchronizer;
    AVWeakReference *weakReferenceToSelf;
    long long status;
    NSError *error;
    struct OpaqueFigSampleBufferAudioRenderer *figAudioRenderer;
}

@end
