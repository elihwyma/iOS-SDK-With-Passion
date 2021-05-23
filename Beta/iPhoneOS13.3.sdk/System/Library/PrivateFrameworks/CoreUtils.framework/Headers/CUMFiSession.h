/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUMFiReadRequest, CUMFiWriteRequest, EAAccessory, EASession, NSInputStream, NSOutputStream, NSString;

@protocol OS_dispatch_queue;

@interface CUMFiSession : NSObject

{
    EASession *_eaSession;
    NSInputStream *_eaInputStream;
    NSOutputStream *_eaOutputStream;
    CUMFiReadRequest *_readRequestList;
    id *_readRequestNext;
    CUMFiReadRequest *_readRequestCurr;
    char *_readBuffer;
    unsigned long long _readLen;
    CUMFiWriteRequest *_writeRequestList;
    id *_writeRequestNext;
    CUMFiWriteRequest *_writeRequestCurr;
    const char *_writeBase;
    const char *_writePtr;
    const char *_writeEnd;
    struct LogCategory *_ucat;
    EAAccessory *_device;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_protocolString;
}

@property (retain, nonatomic) EAAccessory *device;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *protocolString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)activate;
- (void)_handleError:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)readMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processReadRequests;
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processWriteRequests;

@end
