/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol AUPBInspecting;

__attribute__((visibility("hidden")))
@interface AUPBClientConnection : NSObject

{
    NSXPCConnection *xpcconnection;
    id <AUPBInspecting> proxyInterface;
}

@property (retain, nonatomic) NSXPCConnection *xpcconnection;
@property (retain, nonatomic) id <AUPBInspecting> proxyInterface;

@end
