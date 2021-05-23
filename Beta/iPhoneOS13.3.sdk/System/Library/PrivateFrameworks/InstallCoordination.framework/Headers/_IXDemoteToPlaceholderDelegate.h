/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <Foundation/NSObject.h>

@class IXDemotingAppInstallCoordinator, NSString;

@interface _IXDemoteToPlaceholderDelegate : NSObject

{
    NSString *_bundleID;
    CDUnknownBlockType _completion;
    IXDemotingAppInstallCoordinator *_coordinator;
}

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) IXDemotingAppInstallCoordinator *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
- (void)coordinatorDidCompleteSuccessfully:(id)arg1;

@end
