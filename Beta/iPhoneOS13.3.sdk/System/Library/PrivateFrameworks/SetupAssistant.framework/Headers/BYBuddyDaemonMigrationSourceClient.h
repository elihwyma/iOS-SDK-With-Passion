/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSString, NSXPCConnection;

@protocol BYDeviceMigrationDelegate;

@interface BYBuddyDaemonMigrationSourceClient : NSObject

{
    id <BYDeviceMigrationDelegate> _delegate;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id <BYDeviceMigrationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInterface;

- (id)init;
- (void)cancel;
- (void)launchSetupForMigration;
- (void)setFileTransferTemplate:(id)arg1;
- (void)_connectToDaemon;
- (void)didUpdateProgress:(id)arg1;
- (void)didFinishWithError:(id)arg1;
- (void)didChangeConnectionInformation:(id)arg1;
- (void)registerAsUserInterfaceHost:(CDUnknownBlockType)arg1;

@end
