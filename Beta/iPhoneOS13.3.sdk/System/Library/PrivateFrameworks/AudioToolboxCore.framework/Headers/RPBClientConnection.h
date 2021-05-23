/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol RPBInspecting;

__attribute__((visibility("hidden")))
@interface RPBClientConnection : NSObject

{
    NSXPCConnection *_xpconnection;
    id <RPBInspecting> _proxyInterface;
}

@property (retain) NSXPCConnection *xpconnection;
@property (retain) id <RPBInspecting> proxyInterface;

@end
