/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBProcess.h>

@class FBSExtensionInfo;

@interface FBExtensionProcess : FBProcess

{
    FBSExtensionInfo *_extensionInfo;
    int _hostPID;
    struct os_unfair_lock_s _hostProcessLock;
    FBProcess *_lock_hostProcess;
}

@property (nonatomic, readonly) FBSExtensionInfo *extensionInfo;
@property (nonatomic, readonly) FBProcess *hostProcess;
@property (nonatomic, readonly) int hostPID;

- (id)succinctDescriptionBuilder;
- (id)initWithHandle:(id)arg1 identity:(id)arg2 hostPID:(int)arg3;
- (id)initWithHandle:(id)arg1 identity:(id)arg2 executionContext:(id)arg3;
- (id)initWithHandle:(id)arg1 identity:(id)arg2 hostProcess:(id)arg3;
- (_Bool)isExtensionProcess;

@end
