/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFSiriActivationListener, NSString;

@protocol OS_dispatch_queue;

@interface AFRemoteRequestWatcher : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _prewarmHandler;
    CDUnknownBlockType _requestHandler;
    CDUnknownBlockType _dismissalHandler;
    CDUnknownBlockType _intentHandler;
    int _speechRequestToken;
    CDUnknownBlockType _speechRequestHandler;
    AFSiriActivationListener *_siriActivationListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setRequestHandler:(CDUnknownBlockType)arg1;
- (void)setDismissalHandler:(CDUnknownBlockType)arg1;
- (void)_setupRequestListener;
- (void)_dispatchSpeechRequestOptions:(id)arg1;
- (void)_setupSpeechRequestListener;
- (void)siriActivationListener:(id)arg1 prewarmWithRequestInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)siriActivationListener:(id)arg1 activateWithRequestInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)siriActivationListener:(id)arg1 deactivateForReason:(long long)arg2 options:(unsigned long long)arg3 analyticsContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)siriActivationListener:(id)arg1 handleIntent:(id)arg2 inBackgroundAppWithBundleId:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setPrewarmHandler:(CDUnknownBlockType)arg1;
- (void)setNewRequestHandler:(CDUnknownBlockType)arg1;
- (void)setIntentHandler:(CDUnknownBlockType)arg1;
- (void)setNewSpeechRequestHandler:(CDUnknownBlockType)arg1;

@end
