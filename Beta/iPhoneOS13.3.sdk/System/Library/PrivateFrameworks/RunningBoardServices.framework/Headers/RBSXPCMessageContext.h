/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@protocol OS_xpc_object;

@interface RBSXPCMessageContext : NSObject

{
    NSObject<OS_xpc_object> *_handoffToken;
    NSObject<OS_xpc_object> *_connection;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;

+ (id)currentContext;

- (void)_unset;
- (void)_set;
- (id)_initWithHandoffToken:(id)arg1;
- (void)handoffToQueue:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
