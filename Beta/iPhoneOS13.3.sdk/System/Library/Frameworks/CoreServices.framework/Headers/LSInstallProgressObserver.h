/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface LSInstallProgressObserver : NSObject

{
    NSXPCConnection *_connection;
}

@property (weak, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addObserver;
- (void)_lsPing:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removeObserver;
- (void)sendNotification:(int)arg1 forApplications:(id)arg2 withPlugins:(_Bool)arg3;
- (void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)installationFailedForApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithConnection:(id)arg1;

@end
