/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/Swift-Protocol.h>

@class BSMachPortTaskNameRight, BSProcessHandle, RBSProcessIdentity;

@protocol FBSProcessIdentity <Swift>

@property (retain, nonatomic, readonly) BSProcessHandle *handle;
@property (retain, nonatomic, readonly) BSMachPortTaskNameRight *taskNameRight;
@property (retain, nonatomic, readonly) RBSProcessIdentity *identity;

@end
