/*
 Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, SPXPCConnection;

@protocol OS_os_transaction, OS_xpc_object;

@interface SPXPCMessage : NSObject

{
    SPXPCConnection *_receivingConnection;
    NSObject<OS_xpc_object> *_x_reply_connection;
    NSObject<OS_xpc_object> *_x_message;
    NSObject<OS_xpc_object> *_x_rootObject;
    NSObject<OS_xpc_object> *_x_Objects;
    NSObject<OS_xpc_object> *_x_reply;
    NSObject<OS_xpc_object> *_x_feedbackData;
    NSObject<OS_os_transaction> *_replyTransaction;
    NSString *_name;
    NSDictionary *_info;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *feedbackData;
@property (copy, nonatomic) NSDictionary *info;

- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithName:(id)arg1;
- (void)setRootObject:(id)arg1;
- (void)sendReply:(id)arg1;
- (_Bool)needsReply;
- (id)_createXPCMessage;
- (id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2;
- (void)setRootObjectForFeedback:(id)arg1;
- (id)rootObjectOfClasses:(id)arg1;
- (id)objectsOfClasses:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithName:(id)arg1 batchSize:(unsigned long long)arg2;
- (id)rootObjectOfClassesForFeedback:(id)arg1;

@end
