/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection, NSXPCInterface;

@interface CHPluginHelper : NSObject

{
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
}

- (id)init;
- (unsigned long long)unreadCallCount;
- (id)recentCallsWithLimitingTypes:(unsigned int)arg1;

@end
