/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CDPContext, CDPStateController, NSString, SFSession;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationCDPSetup : NSObject

{
    int _cdpApprovalServerState;
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
    int _cdpSetupRequestState;
    _Bool _invalidateCalled;
    unsigned long long _startTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _metricSeconds;
    id _presentingViewController;
    SFSession *_sfSession;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) double metricSeconds;
@property (retain, nonatomic) id presentingViewController;
@property (retain, nonatomic) SFSession *sfSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_activate;
- (void)invalidate;
- (void)activate;
- (void)_run;
- (void)_complete:(id)arg1;
- (int)_runCDPApprovalServerStart;
- (int)_runCDPSetupRequest;
- (void)uiController:(id)arg1 didPresentRootViewController:(id)arg2;

@end
