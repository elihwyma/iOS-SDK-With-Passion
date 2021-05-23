/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSXPCConnection;

@interface BYSettingsManagerClient : NSObject

{
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (_Bool)hasStashedValuesOnDisk;
- (void)_connectToDaemon;

@end
