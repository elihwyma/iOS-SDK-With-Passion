/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <Foundation/NSObject.h>

@class IXAppInstallCoordinator, NSString;

@protocol IXInitiatingOrUpdatingCoordinator;

@interface _IXSimpleInstallerDelegate : NSObject

{
    CDUnknownBlockType _completion;
    NSString *_bundleID;
    IXAppInstallCoordinator<IXInitiatingOrUpdatingCoordinator> *_coordinator;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) IXAppInstallCoordinator<IXInitiatingOrUpdatingCoordinator> *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
- (void)coordinatorDidCompleteSuccessfully:(id)arg1;

@end
