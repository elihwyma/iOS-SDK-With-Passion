/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _UIDruidSourceWarmUpConnection : NSObject

{
    NSXPCConnection *_connection;
}

- (void)warmUp;

@end
