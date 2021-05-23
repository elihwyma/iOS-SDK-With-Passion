/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class NSString, XPCServiceConnection;

@protocol NSObject, XPCNSServiceConnectionDelegate;

@interface XPCNSServiceConnection : NSObject

{
    XPCServiceConnection *_serviceConnection;
    id <XPCNSServiceConnectionDelegate> _delegate;
    id <NSObject> _context;
}

@property (retain, nonatomic, readonly) NSString *serviceName;
@property (weak, nonatomic) id <XPCNSServiceConnectionDelegate> delegate;
@property (retain, nonatomic) id <NSObject> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)sendMessage:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)XPCServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (void)XPCServiceConnectionDidDisconnect:(id)arg1;
- (id)initWithXPCServiceConnection:(id)arg1;

@end
