/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface NWRemoteConnectionWriteRequest : NSObject

{
    NSData *_data;
    NSUUID *_clientID;
}

@property (retain) NSData *data;
@property (retain) NSUUID *clientID;

- (id)initWithData:(id)arg1 clientID:(id)arg2;

@end
