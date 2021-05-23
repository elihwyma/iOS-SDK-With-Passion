/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray, NSString;

@protocol OS_dispatch_queue, REHTTPConnectionDelegate;

@interface REHTTPConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingResponse;
    NSMapTable *_pendingRequests;
    id <REHTTPConnectionDelegate> _delegate;
    struct _CFHTTPServerConnection *_connection;
}

@property (nonatomic, readonly) struct _CFHTTPServerConnection *connection;
@property (weak, nonatomic) id <REHTTPConnectionDelegate> delegate;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (_Bool)open;
- (void)close;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)initWithConnection:(struct _CFHTTPServerConnection *)arg1;
- (void)invalidated;
- (void)_sendResponse:(id)arg1;
- (void)_handleCompleteRequest:(id)arg1 stream:(id)arg2 error:(id)arg3;
- (void)didRecieveError:(id)arg1;
- (void)didRecieveRequest:(struct _CFHTTPServerRequest *)arg1;
- (void)didCompleteResponse:(struct _CFHTTPServerResponse *)arg1 error:(id)arg2;

@end
