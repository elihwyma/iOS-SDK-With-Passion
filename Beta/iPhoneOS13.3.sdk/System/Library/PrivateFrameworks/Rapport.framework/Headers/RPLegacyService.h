/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface RPLegacyService : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSMutableDictionary *_requestMap;
    struct BonjourAdvertiserPrivate *_bonjourAdvertiser;
    int _listenerPort;
    int _tcpSockV4;
    int _tcpSockV6;
    unsigned char _deviceActionType;
    _Bool _needsSetup;
    unsigned int _advertiseRate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    NSString *_serviceType;
    NSDictionary *_txtDictionary;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _sessionStartedHandler;
    CDUnknownBlockType _sessionEndedHandler;
    CDUnknownBlockType _showPINHandler;
    CDUnknownBlockType _hidePINHandler;
}

@property (nonatomic) unsigned int advertiseRate;
@property (nonatomic) unsigned char deviceActionType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) _Bool needsSetup;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSDictionary *txtDictionary;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType sessionStartedHandler;
@property (copy, nonatomic) CDUnknownBlockType sessionEndedHandler;
@property (copy, nonatomic) CDUnknownBlockType showPINHandler;
@property (copy, nonatomic) CDUnknownBlockType hidePINHandler;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_cleanup;
- (void)_invalidated;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (int)_tcpStart;
- (int)_bonjourUpdateService;
- (int)_bonjourUpdateTXT;

@end
