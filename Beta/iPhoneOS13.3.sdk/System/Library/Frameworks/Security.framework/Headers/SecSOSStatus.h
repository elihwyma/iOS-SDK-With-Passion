/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface SecSOSStatus : NSObject

{
    NSXPCConnection *_connection;
}

@property (retain) NSXPCConnection *connection;

- (id)init;

@end
