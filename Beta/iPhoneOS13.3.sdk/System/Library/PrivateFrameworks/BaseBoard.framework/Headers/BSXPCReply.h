/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface BSXPCReply : NSObject

{
    NSObject<OS_xpc_object> *_reply;
    int _sent;
}

+ (id)replyForMessage:(id)arg1;
+ (id)messageWithReply:(id)arg1;

- (id)message;
- (id)_initWithReply:(id)arg1;
- (id)initWithReply:(id)arg1;
- (id)initForMessage:(id)arg1;
- (void)sendReply:(CDUnknownBlockType)arg1;
- (long long)messageKind;

@end
