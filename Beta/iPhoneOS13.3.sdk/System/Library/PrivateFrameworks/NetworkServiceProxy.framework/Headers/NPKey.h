/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSData, NSPNetworkAgent, NSUUID;

@interface NPKey : NSObject

{
    unsigned int _session_counter;
    int _error;
    unsigned int _flags;
    NSData *_info;
    NSUUID *_uuid;
}

@property unsigned int session_counter;
@property int error;
@property (retain) NSData *info;
@property (retain) NSUUID *uuid;
@property unsigned int flags;
@property (readonly) NSPNetworkAgent *agentForKey;

- (id)initWithData:(id)arg1;
- (id)data;

@end
