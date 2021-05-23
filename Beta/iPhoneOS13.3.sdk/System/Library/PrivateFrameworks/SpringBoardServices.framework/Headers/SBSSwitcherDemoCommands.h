/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, NSString;

@protocol OS_dispatch_queue;

@interface SBSSwitcherDemoCommands : NSObject

{
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (_Bool)stashSwitcherModelToFilename:(id)arg1;
- (_Bool)loadStashedSwitcherModelFromFilename:(id)arg1;
- (_Bool)updateHiddenApplicationBundleIDs:(id)arg1;
- (_Bool)setShouldDisableSwitcherModelUpdates:(_Bool)arg1;
- (void)_connectionQueue_setupAndActivate;
- (void)_connectionQueue_invalidate;

@end
