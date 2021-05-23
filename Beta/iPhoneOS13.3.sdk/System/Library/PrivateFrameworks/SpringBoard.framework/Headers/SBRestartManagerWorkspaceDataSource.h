/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBRestartManagerWorkspaceDataSource : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isUILocked;
- (void)terminateAllApplicationsForReason:(long long)arg1 description:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)activePrimaryApplicationBundleID;

@end
