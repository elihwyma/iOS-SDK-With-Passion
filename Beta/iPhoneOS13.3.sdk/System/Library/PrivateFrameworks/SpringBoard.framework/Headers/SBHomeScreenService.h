/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSMutableSet, NSNumber, NSString, SBIconController;

@interface SBHomeScreenService : NSObject

{
    struct os_unfair_lock_s _lock;
    SBIconController *_iconController;
    FBServiceClientAuthenticator *_resetHomeScreenLayoutAuthenticator;
    FBServiceClientAuthenticator *_requestSuggestedAppAuthenticator;
    FBServiceClientAuthenticator *_iconFolderPathLookupAuthenticator;
    FBServiceClientAuthenticator *_addWidgetToTodayViewAuthenticator;
    FBServiceClientAuthenticator *_lowDensityLayoutAuthenticator;
    NSMutableSet *_activeConnections;
    BSServiceConnectionListener *_connectionListener;
}

@property (nonatomic, readonly) SBIconController *iconController;
@property (nonatomic, readonly) FBServiceClientAuthenticator *resetHomeScreenLayoutAuthenticator;
@property (nonatomic, readonly) FBServiceClientAuthenticator *requestSuggestedAppAuthenticator;
@property (nonatomic, readonly) FBServiceClientAuthenticator *iconFolderPathLookupAuthenticator;
@property (nonatomic, readonly) FBServiceClientAuthenticator *addWidgetToTodayViewAuthenticator;
@property (nonatomic, readonly) FBServiceClientAuthenticator *lowDensityLayoutAuthenticator;
@property (nonatomic, readonly) NSMutableSet *activeConnections;
@property (nonatomic, readonly) BSServiceConnectionListener *connectionListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *lowDensityIconLayoutEnabledValue;

- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (oneway void)resetHomeScreenLayoutWithCompletion:(CDUnknownBlockType)arg1;
- (id)folderPathToIconWithBundleIdentifier:(id)arg1;
- (void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1;
- (oneway void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 assertionPort:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithIconController:(id)arg1;

@end
