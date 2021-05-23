/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TRHandshakeOperationHandler : NSObject

{
    CDUnknownBlockType _handshakeHandler;
}

@property (copy, nonatomic) CDUnknownBlockType handshakeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)registerMessageHandlersForSession:(id)arg1;
- (void)_handleHandshakeRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (id)initWithHandshakeHandler:(CDUnknownBlockType)arg1;

@end
