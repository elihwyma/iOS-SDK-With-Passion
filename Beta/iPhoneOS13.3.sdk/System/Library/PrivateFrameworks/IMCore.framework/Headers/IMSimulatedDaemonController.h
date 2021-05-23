/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMDaemonController.h>

@class NSArray;

@interface IMSimulatedDaemonController : IMDaemonController

{
    NSArray *_listeners;
}

@property (retain, nonatomic) NSArray *listeners;

+ (id)sharedInstance;
+ (void)beginSimulatingDaemon;
+ (id)dictionaryForChat:(id)arg1;

- (_Bool)isConnected;
- (_Bool)connectToDaemonWithLaunch:(_Bool)arg1;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (void)sendBalloonPayload:(id)arg1 attachments:(id)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4;
- (_Bool)connectToDaemonWithLaunch:(_Bool)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(_Bool)arg3;

@end
