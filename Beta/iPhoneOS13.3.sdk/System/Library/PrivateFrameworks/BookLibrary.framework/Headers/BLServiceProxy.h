/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface BLServiceProxy : NSObject

{
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)initWithError:(out id *)arg1;
- (void)shutdown;
- (id)_remoteObjectWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)fetchDownloadListWithReply:(CDUnknownBlockType)arg1;
- (void)fetchDownloadFromDownloadID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)pauseDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)resumeDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)cancelDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)cancelAllActiveDownloadsWithReply:(CDUnknownBlockType)arg1;
- (void)purchaseWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)downloadWithPermlink:(id)arg1 title:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestDownloadWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestDownloadWithMetadata:(id)arg1 isRestore:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestDownloadsWithMetadata:(id)arg1 areRestore:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setValueSimulateCrashAtInstallStart:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setValueSimulateCrashAtInstallDuringUnzip:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setValueSimulateCrashAtInstallDuringFinish:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)getCrashSimulationOverrideValuesWithReply:(CDUnknownBlockType)arg1;
- (void)resetAllCrashSimulationOverridesWithReply:(CDUnknownBlockType)arg1;
- (void)setValueSimulateDeviceOutOfSpace:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(CDUnknownBlockType)arg1;

@end
