/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUTDSDaemon, CUTDSProvider, CUTDSSeeker, CUTDSSession, NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CUTDSXPCConnection : NSObject

{
    CUTDSProvider *_activatedProvider;
    CUTDSSeeker *_activatedSeeker;
    CUTDSSession *_activatedSession;
    struct LogCategory *_ucat;
    _Bool _entitled;
    CUTDSDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_xpcCnx;
}

@property (nonatomic, readonly) CUTDSDaemon *daemon;
@property (nonatomic, readonly) _Bool entitled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSXPCConnection *xpcCnx;

- (void)connectionInvalidated;
- (void)xpcTDSProviderActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)xpcTDSSeekerActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)xpcTDSSessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2;
- (_Bool)_entitledAndReturnError:(id *)arg1;

@end
