/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CURetrier, NFReaderSession, NFTag, NSString;

@protocol NFSession, OS_dispatch_queue, OS_dispatch_source;

@interface CUNFCScanner : NSObject

{
    _Bool _invalidateCalled;
    NSObject<OS_dispatch_queue> *_nfcDispatchQueue;
    NFTag *_nfcConnectedTag;
    struct NSMutableArray *_nfcDevices;
    _Bool _nfcPollingHW;
    NSObject<OS_dispatch_source> *_nfcPollTimer;
    CURetrier *_nfcRetrier;
    NFReaderSession *_nfcSession;
    _Bool _nfcStarted;
    NSObject<NFSession> *_nfcTempSession;
    _Bool _pauseWhenFound;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _foundDeviceHandler;
    CDUnknownBlockType _lostDeviceHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) _Bool pauseWhenFound;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType foundDeviceHandler;
@property (copy, nonatomic) CDUnknownBlockType lostDeviceHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)pause;
- (void)resume;
- (void)activate;
- (void)_invalidateWithError:(id)arg1;
- (void)_ensureSessionStarted;
- (void)_ensureSessionStopped;
- (void)_handleSessionStarted:(id)arg1 error:(id)arg2;
- (void)readerSession:(id)arg1 didDetectTags:(id)arg2;
- (void)readerSessionDidEndUnexpectedly:(id)arg1;
- (void)_pause;
- (void)_handleTagFound:(id)arg1;
- (void)_updatePolling;
- (void)_pollTags;
- (_Bool)_pollTag:(id)arg1;
- (id)_readTag:(id)arg1;
- (id)_parseRecord:(id)arg1;

@end
