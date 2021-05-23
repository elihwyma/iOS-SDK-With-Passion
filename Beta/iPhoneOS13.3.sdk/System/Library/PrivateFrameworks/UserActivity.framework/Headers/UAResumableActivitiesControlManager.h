/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface UAResumableActivitiesControlManager : NSObject

{
    int _pid;
    int _recordingPath;
    NSXPCConnection *connection;
    id _delegate;
}

@property (retain) NSXPCConnection *connection;
@property (readonly) int serverPID;
@property id delegate;
@property int recordingPath;

+ (id)resumableActivitiesControlManager;

- (id)init;
- (void)synchronize;
- (id)status;
- (void)terminateServer;
- (id)matchingUUIDForString:(id)arg1;
- (id)advertisedItemUUID;
- (id)allUUIDsOfType:(unsigned long long)arg1;
- (id)enabledUUIDs;
- (id)currentAdvertisedItemUUID;
- (id)debuggingInfo;
- (id)dynamicUserActivities;
- (id)recentActions:(_Bool)arg1;
- (id)simulatorStatus;
- (id)status:(id)arg1 options:(id)arg2;
- (void)fetchMoreAppSuggestions;
- (id)defaults:(_Bool)arg1;
- (void)setDefault:(id)arg1 value:(id)arg2;
- (void)restartServer;
- (void)setDebugOption:(id)arg1 value:(id)arg2;
- (void)injectBTLEItem:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 frameworkPayload:(id)arg6 payloadDelay:(double)arg7;
- (void)callWillSaveDelegate:(id)arg1;
- (void)callWillSaveDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)callDidSaveDelegate:(id)arg1;
- (void)connectToRemote:(id)arg1 port:(long long)arg2;
- (void)rendevous:(id)arg1 domain:(id)arg2 active:(_Bool)arg3;
- (void)peerDevices:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getSysdiagnoseStringsIncludingPrivateData:(_Bool)arg1;
- (void)replayCommands:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setLocalReflect:(_Bool)arg1;
- (_Bool)getAdvertisedBytes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
