/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface SecuritydXPCClient : NSObject

{
    NSXPCConnection *_connection;
}

@property (retain) NSXPCConnection *connection;

+ (void)configureSecuritydXPCProtocol:(id)arg1;

- (id)init;

@end
