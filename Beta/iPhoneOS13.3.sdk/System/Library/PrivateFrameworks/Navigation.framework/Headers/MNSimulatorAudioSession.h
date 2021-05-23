/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNTraceRouteSimulator, NSString;

__attribute__((visibility("hidden")))
@interface MNSimulatorAudioSession : NSObject

{
    id _delegate;
    _Bool _isSpeaking;
    unsigned long long _voiceGuidanceLevel;
    MNTraceRouteSimulator *_simulator;
}

@property (retain, nonatomic) MNTraceRouteSimulator *simulator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id delegate;
@property (nonatomic) unsigned long long voiceGuidanceLevel;

- (void)stop;
- (void)endSession;
- (_Bool)isSpeaking;
- (void)beginSession;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(_Bool)arg3 minimumRequiredLevel:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)prepareToAnnounce;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)vibrateForPrompt:(unsigned long long)arg1;
- (void)clearAllAnnouncements;
- (id)initWithSimulator:(id)arg1;

@end
