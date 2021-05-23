/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TRNetworkOperationHandler : NSObject

{
    CDUnknownBlockType _joinNetworkHandler;
}

@property (copy, nonatomic) CDUnknownBlockType joinNetworkHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)registerMessageHandlersForSession:(id)arg1;
- (void)_handleNetworkRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (id)initWithJoinNetworkHandler:(CDUnknownBlockType)arg1;

@end
