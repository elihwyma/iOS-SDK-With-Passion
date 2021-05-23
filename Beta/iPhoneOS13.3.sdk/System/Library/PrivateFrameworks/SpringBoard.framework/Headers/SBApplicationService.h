/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBApplicationController;

@interface SBApplicationService : NSObject

{
    SBApplicationController *_applicationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_initWithApplicationController:(id)arg1;
- (void)applicationServer:(id)arg1 client:(id)arg2 deleteSnapshotsForApplicationIdentifier:(id)arg3;

@end
