/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSDictionary, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface TKSmartCardSessionRequest : NSObject

{
    NSDictionary *_parameters;
    CDUnknownBlockType _reply;
    NSXPCConnection *_connection;
}

@property (retain) NSDictionary *parameters;
@property (copy) CDUnknownBlockType reply;
@property (weak) NSXPCConnection *connection;

@end
