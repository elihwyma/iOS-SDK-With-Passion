/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CURetrier, NFNdefTagSession, NSString, NSURL;

@protocol NFSession, OS_dispatch_queue;

@interface CUNFCAdvertiser : NSObject

{
    _Bool _invalidateCalled;
    CURetrier *_nfcRetrier;
    NFNdefTagSession *_nfcSession;
    _Bool _nfcStarted;
    NSObject<NFSession> *_nfcTempSession;
    NSURL *_advertisementURI;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _tagStateChangedHandler;
}

@property (copy, nonatomic) NSURL *advertisementURI;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType tagStateChangedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)activate;
- (void)ndefTagSession:(id)arg1 didTagStateChange:(unsigned int)arg2;
- (void)ndefTagSessionDidEndUnexpectedly:(id)arg1;
- (void)_invalidateWithError:(id)arg1;
- (void)_ensureSessionStarted;
- (void)_ensureSessionStopped;
- (void)_handleSessionStarted:(id)arg1 error:(id)arg2;

@end
