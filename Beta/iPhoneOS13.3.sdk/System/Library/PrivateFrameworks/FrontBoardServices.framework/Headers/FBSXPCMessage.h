/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@protocol BSXPCServiceConnectionMessage, OS_xpc_object;

@interface FBSXPCMessage : NSObject

{
    NSObject<OS_xpc_object> *_payload;
    id <BSXPCServiceConnectionMessage> _reply;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *payload;

+ (id)message;
+ (id)messageWithPacker:(CDUnknownBlockType)arg1;
+ (id)messageWithPayload:(id)arg1;
+ (id)messageWithBSXPCMessage:(id)arg1 ownReply:(_Bool)arg2;

- (id)init;
- (id)initWithMessagePayload:(id)arg1;
- (id)initWithMessagePacker:(CDUnknownBlockType)arg1;
- (void)sendReplyMessageWithPacker:(CDUnknownBlockType)arg1;

@end
