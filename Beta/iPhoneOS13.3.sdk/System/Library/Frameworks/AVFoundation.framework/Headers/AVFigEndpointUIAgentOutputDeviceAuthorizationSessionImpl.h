/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl, AVOutputDeviceAuthorizationRequest, AVOutputDeviceAuthorizationSession, AVWeakReference, NSString;

__attribute__((visibility("hidden")))
@interface AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl : NSObject

{
    AVOutputDeviceAuthorizationSession *_parentSession;
    struct OpaqueFigEndpointUIAgent *_agent;
    AVWeakReference *_weakObserver;
    AVOutputDeviceAuthorizationRequest *_currentRequest;
    AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl *_currentRequestImpl;
}

@property (nonatomic, readonly) struct OpaqueFigEndpointUIAgent *figEndpointUIAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak) AVOutputDeviceAuthorizationSession *parentAuthorizationSession;

- (void)dealloc;
- (id)initWithFigEndpointUIAgent:(struct OpaqueFigEndpointUIAgent *)arg1;
- (void)_startNewRequest:(id)arg1 impl:(id)arg2;
- (void)_notifyCurrentRequestOfTerminalStatus:(long long)arg1 error:(id)arg2;
- (void)_showAuthPromptWithUniqueID:(id)arg1 routeDescriptor:(struct __CFDictionary *)arg2 pinMode:(_Bool)arg3 reason:(struct __CFString *)arg4;
- (void)_finishedWithPrompt;
- (void)outputDeviceAuthorizationRequestImpl:(id)arg1 didRespondWithAuthorizationToken:(id)arg2;
- (void)outputDeviceAuthorizationRequestImplDidCancel:(id)arg1;

@end
