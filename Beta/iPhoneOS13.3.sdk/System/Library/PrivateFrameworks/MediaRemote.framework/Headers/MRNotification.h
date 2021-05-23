/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface MRNotification : NSObject

{
    NSString *_notification;
    NSDictionary *_userInfo;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_xpcMessage;
}

@property (nonatomic, readonly) NSString *notification;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcMessage;

- (id)initWithNotification:(id)arg1 userInfo:(id)arg2 queue:(id)arg3;

@end
