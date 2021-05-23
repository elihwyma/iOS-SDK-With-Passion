/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSMutableArray, NSString, SBAppSwitcherSettings, SBRecentAppLayouts, SBSwitcherDemoFilteringController;

@protocol OS_dispatch_queue;

@interface SBSwitcherDemoCommandsServer : NSObject

{
    SBAppSwitcherSettings *_switcherSettings;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    SBSwitcherDemoFilteringController *_demoFilteringController;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    SBRecentAppLayouts *_recents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (_Bool)stashSwitcherModelToFilename:(id)arg1;
- (_Bool)loadStashedSwitcherModelFromFilename:(id)arg1;
- (_Bool)updateHiddenApplicationBundleIDs:(id)arg1;
- (_Bool)setShouldDisableSwitcherModelUpdates:(id)arg1;
- (void)_queue_addConnection:(id)arg1;
- (void)_queue_removeConnection:(id)arg1;
- (id)initWithRecentAppLayouts:(id)arg1 demoFilteringController:(id)arg2;
- (id)_filePathFromUnsanitizedFilename:(id)arg1;

@end
