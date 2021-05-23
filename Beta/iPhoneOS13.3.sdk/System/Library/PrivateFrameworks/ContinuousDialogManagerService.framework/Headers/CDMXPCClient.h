/*
 Image: /System/Library/PrivateFrameworks/ContinuousDialogManagerService.framework/ContinuousDialogManagerService
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol CDMXPCClientDelegate;

@interface CDMXPCClient : NSObject

{
    NSXPCConnection *_connection;
    id <CDMXPCClientDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_connection;
- (void)disconnect;
- (id)initWithDelegate:(id)arg1;
- (void)connect;
- (id)_remoteObjectProxy;
- (void)_clearConnectionWithError:(id)arg1;
- (void)handleClientAceUpdate:(id)arg1;
- (void)handleServiceAceUpdate:(id)arg1;

@end
