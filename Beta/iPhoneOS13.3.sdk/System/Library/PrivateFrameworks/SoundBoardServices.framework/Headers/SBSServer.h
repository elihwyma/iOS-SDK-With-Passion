/*
 Image: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, NSXPCListener;

@protocol SBSAppleCareImplementer, SBSCannedDemoServiceImplementer, SBSDebugInfoImplementer, SBSStereoLeaderRoleImplementer, SBSSysdiagnoseImplementer, SBSSystemImplementer;

@interface SBSServer : NSObject

{
    NSXPCListener *_serverListener;
    NSMutableArray *_clients;
    NSMutableSet *_delegates;
    id <SBSAppleCareImplementer> _appleCareDelegate;
    id <SBSStereoLeaderRoleImplementer> _stereoLeaderDelegate;
    id <SBSDebugInfoImplementer> _debugInfoDelegate;
    id <SBSSystemImplementer> _systemDelegate;
    id <SBSCannedDemoServiceImplementer> _cannedDemoServerDelegate;
    id <SBSSysdiagnoseImplementer> _sysdiagnoseDelegate;
}

@property (weak, nonatomic) id <SBSAppleCareImplementer> appleCareDelegate;
@property (weak, nonatomic) id <SBSStereoLeaderRoleImplementer> stereoLeaderDelegate;
@property (weak, nonatomic) id <SBSDebugInfoImplementer> debugInfoDelegate;
@property (weak, nonatomic) id <SBSSystemImplementer> systemDelegate;
@property (weak, nonatomic) id <SBSCannedDemoServiceImplementer> cannedDemoServerDelegate;
@property (weak, nonatomic) id <SBSSysdiagnoseImplementer> sysdiagnoseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (_Bool)hasEntitlement:(id)arg1;
- (void)reboot:(id)arg1;
- (void)handleClientDisconnection:(id)arg1;
- (void)requestDeferredReboot;
- (void)setAppleCareIsEnabled:(_Bool)arg1 withOptions:(id)arg2;
- (void)setDeviceAsStereoLeader:(_Bool)arg1 withOptions:(id)arg2;
- (void)getAllDebugInfo:(CDUnknownBlockType)arg1;
- (void)getTuningInfo:(CDUnknownBlockType)arg1;
- (void)setTuningInfoOnBox:(id)arg1 at:(id)arg2 withValue:(float)arg3;
- (void)playTone:(unsigned int)arg1;
- (void)stopTone:(unsigned int)arg1;
- (void)sysdiagnoseHasStarted:(_Bool)arg1;
- (void)siriUtteranceFileToBePlayed:(id)arg1 duckMusic:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getUserDefaults:(CDUnknownBlockType)arg1;
- (void)setUserDefaults:(id)arg1 withValue:(id)arg2;
- (void)resetAllUserDefaults;
- (void)resetUserDefault:(id)arg1;
- (void)findConnectionAndSetClientType:(unsigned long long)arg1;
- (id)_gatherXPCClientInfo:(id)arg1;

@end
