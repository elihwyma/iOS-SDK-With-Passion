/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class NSString, SBFLockScreenActionContext;

@interface CSSimpleLockScreenActionProvider : NSObject

{
    SBFLockScreenActionContext *_lockScreenActionContext;
}

@property (retain, nonatomic) SBFLockScreenActionContext *lockScreenActionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidateLockScreenActionContext;

@end
