/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, NSString;

@protocol OS_dispatch_queue, SBSApplicationUserQuitMonitorDelegate;

@interface SBSApplicationUserQuitMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnection *_connection;
    id <SBSApplicationUserQuitMonitorDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)initWithDelegate:(id)arg1;
- (oneway void)userClosedLastSceneOfApplicationWithBundleID:(id)arg1;
- (void)_connectionQueue_setupAndActivate;
- (void)_connectionQueue_invalidate;

@end
