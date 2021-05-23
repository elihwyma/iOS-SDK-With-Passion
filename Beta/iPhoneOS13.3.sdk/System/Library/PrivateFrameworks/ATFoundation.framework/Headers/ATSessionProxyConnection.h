/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <Foundation/NSObject.h>

@class ATSession, NSString, NSXPCConnection;

@interface ATSessionProxyConnection : NSObject

{
    ATSession *_session;
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)stop;
- (void)start;
- (void)connect;
- (void)session:(id)arg1 didFinishSessionTask:(id)arg2;
- (void)session:(id)arg1 didUpdateSessionTask:(id)arg2;
- (void)session:(id)arg1 willBeginSessionTask:(id)arg2;
- (id)initWithSession:(id)arg1 connection:(id)arg2;

@end
