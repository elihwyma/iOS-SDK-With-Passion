/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class BSProcessHandle, BSServiceConnection, FBProcess, NSString, RBSProcessIdentity;

@protocol BSXPCServiceConnectionMessaging, FBSServiceFacilityClientContext;

@interface FBServiceFacilityServerClientHandle : NSObject

{
    NSString *_facilityID;
    BSServiceConnection *_connection;
    FBProcess *_process;
    BSProcessHandle *_processHandle;
    id <FBSServiceFacilityClientContext> _context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) BSProcessHandle *processHandle;
@property (copy, nonatomic, readonly) RBSProcessIdentity *processIdentity;
@property (nonatomic, readonly, getter=isSuspended) _Bool suspended;
@property (copy, nonatomic, readonly) NSString *facilityID;
@property (retain, nonatomic) id <FBSServiceFacilityClientContext> context;
@property (nonatomic, readonly) id <BSXPCServiceConnectionMessaging> clientHandle_messageBuilder;

- (void)invalidate;
- (id)prettyProcessDescription;
- (id)initWithFacilityID:(id)arg1 connection:(id)arg2;

@end
