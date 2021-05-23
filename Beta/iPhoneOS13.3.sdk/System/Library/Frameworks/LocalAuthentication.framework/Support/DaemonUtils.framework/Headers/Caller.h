/*
 Image: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
 */

#import <Foundation/NSObject.h>

@class NSData, NSXPCConnection;

@protocol OS_xpc_object;

@interface Caller : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_xpc_object> *_connection2;
    NSObject<OS_xpc_object> *_event;
}

@property (weak, nonatomic, readonly) NSXPCConnection *connection;
@property (weak, nonatomic, readonly) NSObject<OS_xpc_object> *connection2;
@property (weak, nonatomic, readonly) NSObject<OS_xpc_object> *event;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic, readonly) int asid;
@property (nonatomic, readonly) CDStruct_6ad76789 auditToken;
@property (nonatomic, readonly) NSData *auditTokenData;
@property (nonatomic, readonly, getter=isUsingLegacyConnection) _Bool usingLegacyConnection;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithConnection:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (id)initWithConnection:(id)arg1 event:(id)arg2;
- (_Bool)isEqualToAuditToken:(CDStruct_6ad76789)arg1;
- (_Bool)isEqualToAuditTokenData:(id)arg1;

@end
