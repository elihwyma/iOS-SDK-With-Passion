/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface CallDBMigrator : NSObject

{
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
}

- (id)init;
- (void)migrate:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end
