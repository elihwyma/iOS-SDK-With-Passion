/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/Swift-Protocol.h>

@class BSProcessHandle, NSString, RBSProcessIdentity;

@protocol FBSServiceFacilityClientContext;

@protocol FBSServiceFacilityClientHandle <Swift>

@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) BSProcessHandle *processHandle;
@property (copy, nonatomic, readonly) RBSProcessIdentity *processIdentity;
@property (nonatomic, readonly, getter=isSuspended) _Bool suspended;
@property (copy, nonatomic, readonly) NSString *facilityID;
@property (retain, nonatomic) id <FBSServiceFacilityClientContext> context;

@end
