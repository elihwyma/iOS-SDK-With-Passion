/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, VSSpeechRequest;

@protocol OS_dispatch_queue, VSSpeechTaskProtocol;

@interface VSSpeechTaskQueue : NSObject

{
    NSMutableArray *_eagerTasks;
    NSMutableArray *_speakTasks;
    id <VSSpeechTaskProtocol> _currentTask;
    NSObject<OS_dispatch_queue> *_speakingQueue;
    VSSpeechRequest *_lastSynthesisRequest;
    unsigned long long _lastSynthesisRequestCreatedTimeStamp;
    struct _opaque_pthread_mutexattr_t _threadMutexAttr;
    struct _opaque_pthread_mutex_t _threadMutex;
}

@property (retain, nonatomic) NSMutableArray *eagerTasks;
@property (retain, nonatomic) NSMutableArray *speakTasks;
@property (retain, nonatomic) id <VSSpeechTaskProtocol> currentTask;
@property (nonatomic) struct _opaque_pthread_mutex_t threadMutex;
@property (nonatomic) struct _opaque_pthread_mutexattr_t threadMutexAttr;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *speakingQueue;
@property (retain, nonatomic) VSSpeechRequest *lastSynthesisRequest;
@property (nonatomic) unsigned long long lastSynthesisRequestCreatedTimeStamp;

+ (id)sharedQueue;

- (id)init;
- (void)addTask:(id)arg1;
- (void)cancelCurrentTask;
- (void)suspendCurrentTask;
- (void)resumeCurrentTask;
- (void)spinNextTask;

@end
