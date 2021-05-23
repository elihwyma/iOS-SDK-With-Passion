/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSSet, TRNearbyDevice, TROperationQueue, TRSession, UIViewController;

@interface TRSetupWorkflow : NSObject

{
    CDUnknownBlockType _startedHandler;
    CDUnknownBlockType _configurationStageStartedHandler;
    CDUnknownBlockType _networkStageStartedHandler;
    CDUnknownBlockType _activationStageStartedHandler;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _failureHandler;
    TRNearbyDevice *_nearbyDevice;
    unsigned long long _state;
    TRSession *_session;
    NSSet *_unauthenticatedAccountServices;
    UIViewController *_presentingViewController;
    TROperationQueue *_operationQueue;
}

@property (retain, nonatomic) TRNearbyDevice *nearbyDevice;
@property unsigned long long state;
@property (retain) TRSession *session;
@property (retain, nonatomic) NSSet *unauthenticatedAccountServices;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) TROperationQueue *operationQueue;
@property (copy, nonatomic) CDUnknownBlockType startedHandler;
@property (copy, nonatomic) CDUnknownBlockType configurationStageStartedHandler;
@property (copy, nonatomic) CDUnknownBlockType networkStageStartedHandler;
@property (copy, nonatomic) CDUnknownBlockType activationStageStartedHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) CDUnknownBlockType failureHandler;

+ (void)initialize;

- (void)cancel;
- (void)start;
- (void)_abortSetupWithErrorCode:(long long)arg1 userInfo:(id)arg2;
- (void)_performHandshakeOperation;
- (void)_performConfigurationOperation;
- (void)_performNetworkOperation;
- (void)_performActivationOperation;
- (void)_performAuthenticationOperation;
- (void)_performCompletionOperation;
- (void)_releaseHandlers;
- (id)initWithNearbyDevice:(id)arg1 presentingViewController:(id)arg2;

@end
