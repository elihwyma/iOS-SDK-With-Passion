/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol OS_dispatch_queue;

@interface RPAppAudioCaptureManager : NSObject

{
    _Bool _resumed;
    CDUnknownBlockType _appAudioOutputHandler;
    NSDate *_lastAudioDate;
    CDUnknownBlockType _appTapDidStartHandler;
    NSObject<OS_dispatch_queue> *_audioDispatchQueue;
    CDStruct_f128470a *_audioRecorderQueue;
    struct AudioStreamBasicDescription _audioBasicDescription;
}

@property (nonatomic) CDStruct_f128470a *audioRecorderQueue;
@property (copy, nonatomic) CDUnknownBlockType appAudioOutputHandler;
@property (nonatomic) _Bool resumed;
@property (retain, nonatomic) NSDate *lastAudioDate;
@property (copy, nonatomic) CDUnknownBlockType appTapDidStartHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioDispatchQueue;
@property (nonatomic) struct AudioStreamBasicDescription audioBasicDescription;

- (void)stop;
- (id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription)arg1;
- (_Bool)handleStartAudioQueueFailed:(int)arg1 didFailHandler:(CDUnknownBlockType)arg2;
- (void)startWithProcessID:(int)arg1 outputHandler:(CDUnknownBlockType)arg2 didStartHandler:(CDUnknownBlockType)arg3;
- (void)resumeWithProcessID:(int)arg1;

@end
