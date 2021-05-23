/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class SBSStatusBarStyleOverridesAssertion;

@protocol AXHALiveListenDelegate;

@interface AXHALiveListenController : NSObject

{
    SBSStatusBarStyleOverridesAssertion *_llStatusBarAssertion;
    float _noise;
    float _signal;
    struct OpaqueExtAudioFile *_debugAudioFile;
    _Bool _exportsLiveListenToFile;
    struct OpaqueAudioComponentInstance *_mixerUnit;
    struct OpaqueAudioComponentInstance *_rioUnit;
    _Bool isListening;
    _Bool _didInitializeAudioUnit;
    id <AXHALiveListenDelegate> _delegate;
}

@property (nonatomic) _Bool didInitializeAudioUnit;
@property (nonatomic) _Bool exportsLiveListenToFile;
@property (weak, nonatomic) id <AXHALiveListenDelegate> delegate;
@property (nonatomic, readonly) struct OpaqueAudioComponentInstance *rioUnit;
@property (nonatomic, readonly) struct OpaqueAudioComponentInstance *mixerUnit;
@property (nonatomic) _Bool isListening;

- (id)init;
- (void)dealloc;
- (float)audioLevel;
- (_Bool)startListeningWithError:(id *)arg1;
- (void)audioSessionWasInterrupted:(id)arg1;
- (_Bool)stopListeningWithError:(id *)arg1;
- (void)mediaServicesWereReset:(id)arg1;
- (void)audioRouteDidChange:(id)arg1;
- (struct OpaqueExtAudioFile *)debugAudioFile;

@end
