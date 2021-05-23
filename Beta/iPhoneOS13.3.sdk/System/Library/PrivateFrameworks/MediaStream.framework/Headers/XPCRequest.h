/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface XPCRequest : NSObject

{
    CDUnknownBlockType _handler;
    unsigned long long _sequence;
    NSObject<OS_xpc_object> *_message;
    NSObject<OS_xpc_object> *_reply;
}

@property (nonatomic, readonly) unsigned long long sequence;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *message;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *reply;

- (void)sendReply;
- (id)initWithMessage:(id)arg1 sequence:(unsigned long long)arg2 connection:(id)arg3;

@end
