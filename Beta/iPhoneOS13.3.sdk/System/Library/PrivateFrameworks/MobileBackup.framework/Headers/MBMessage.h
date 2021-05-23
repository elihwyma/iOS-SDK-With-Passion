/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class MBConnection, NSArray, NSError, NSMutableDictionary, NSString;

@protocol NSSecureCoding><NSCopying, OS_xpc_object;

@interface MBMessage : NSObject

{
    MBConnection *_connection;
    NSObject<OS_xpc_object> *_xpcObject;
    NSMutableDictionary *_messageInfo;
    NSMutableDictionary *_replyInfo;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (retain, nonatomic) NSMutableDictionary *messageInfo;
@property (retain, nonatomic) NSMutableDictionary *replyInfo;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *arguments;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<NSSecureCoding><NSCopying> *reply;
@property (retain, nonatomic) NSError *replyError;
@property (retain, nonatomic) MBConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_allowedClasses;
+ (id)messageWithName:(id)arg1 arguments:(id)arg2;

- (void)archiver:(id)arg1 didEncodeObject:(id)arg2;
- (id)_xpcObject;
- (id)initWithName:(id)arg1 arguments:(id)arg2;
- (id)_initWithXPCObject:(id)arg1;
- (void)sendReply;

@end
