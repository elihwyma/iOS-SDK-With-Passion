/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSUUID, NWConnection;

__attribute__((visibility("hidden")))
@interface NWRemoteConnectionWrapper : NSObject

{
    NSUUID *_clientID;
    NWConnection *_connection;
}

@property (retain) NSUUID *clientID;
@property (retain) NWConnection *connection;

@end
