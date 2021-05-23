/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMAudioSession, AXMHapticComponent, AXMSoundComponent, AXMSpeechComponent, AXMTaskDispatcher, NSArray, NSString;

@protocol OS_dispatch_queue;

@interface AXMOutputManager : NSObject

{
    AXMTaskDispatcher *_outputRequests;
    _Bool _usesPrivateAudioSession;
    AXMAudioSession *_audioSession;
    long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    AXMSoundComponent *_queue_soundComponent;
    AXMSpeechComponent *_queue_speechComponent;
    AXMHapticComponent *_queue_hapticComponent;
    NSArray *_queue_activeComponents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)disable;
- (void)dispatcher:(id)arg1 handleTask:(id)arg2;
- (id)dispatchRequest:(id)arg1;
- (id)initWithComponents:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)enableWithCompletion:(CDUnknownBlockType)arg1;
- (void)speak:(id)arg1;
- (void)interrupt:(id)arg1;
- (void)interruptImmediately;
- (void)interruptPolitely;
- (void)playSound:(id)arg1;
- (id)playActiveSound:(id)arg1;

@end
