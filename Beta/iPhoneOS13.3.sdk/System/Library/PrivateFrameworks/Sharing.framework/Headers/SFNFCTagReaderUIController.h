/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CUXPCAgent, CUXPCAgentConnection, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface SFNFCTagReaderUIController : NSObject

{
    _Bool _activateCalled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    long long _nfcTagScanCount;
    _Bool _nfcTagScanPending;
    CUXPCAgent *_xpcAgent;
    NSXPCConnection *_xpcCnx;
    CUXPCAgentConnection *_xpcUICnx;
    CDUnknownBlockType _invalidationHandler;
    long long _mode;
    NSString *_purpose;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) long long mode;
@property (copy, nonatomic) NSString *purpose;

- (id)init;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_interrupted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_ensureXPCStarted;
- (void)uiActivatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)uiInvalidatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)nfcTagScannedCount:(long long)arg1;
- (void)_nfcTagScannedCount;
- (void)nfcTagScanned;

@end
