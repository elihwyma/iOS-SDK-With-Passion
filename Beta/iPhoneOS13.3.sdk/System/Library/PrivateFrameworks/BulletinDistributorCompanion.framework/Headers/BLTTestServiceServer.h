/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSXPCListener;

@interface BLTTestServiceServer : NSObject

{
    NSMutableArray *_clientConnections;
    NSXPCListener *_listener;
}

@property (retain, nonatomic) NSMutableArray *clientConnections;
@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedTestServer;

- (id)init;
- (void)resume;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(_Bool)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 alwaysSend:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendAllSectionInfoWithSpool:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)spoolSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearSectionInfoSentCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)getStandaloneTestModeEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)disableStandaloneTestModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)willAlertForSectionID:(id)arg1 subtype:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)settingOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (void)originalSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)overriddenSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeClientConnection:(id)arg1;

@end
