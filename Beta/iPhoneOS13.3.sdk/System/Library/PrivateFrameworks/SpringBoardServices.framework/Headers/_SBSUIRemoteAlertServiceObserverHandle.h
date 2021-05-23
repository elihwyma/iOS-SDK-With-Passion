/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _SBSUIRemoteAlertServiceObserverHandle : NSObject

{
    CDUnknownBlockType _activationHandler;
    CDUnknownBlockType _deactivationHandler;
}

@property (copy, nonatomic) CDUnknownBlockType activationHandler;
@property (copy, nonatomic) CDUnknownBlockType deactivationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;

@end
