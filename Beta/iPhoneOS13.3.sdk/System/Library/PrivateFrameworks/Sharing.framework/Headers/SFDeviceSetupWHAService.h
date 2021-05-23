/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class SFDeviceOperationHandlerCDPSetup, SFService, SFSession;

@protocol OS_dispatch_queue;

@interface SFDeviceSetupWHAService : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _prefCDPEnabled;
    SFService *_sfService;
    SFSession *_sfSession;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    _Bool _needsCDPRepair;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _progressHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) _Bool needsCDPRepair;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_cleanup;
- (void)activate;
- (void)_sfServiceStart;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleRequest:(id)arg1 flags:(unsigned int)arg2 session:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_handleInfoExchange:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;

@end
