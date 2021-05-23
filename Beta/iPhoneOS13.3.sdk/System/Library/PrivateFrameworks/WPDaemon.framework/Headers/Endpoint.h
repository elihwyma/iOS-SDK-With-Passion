/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface Endpoint : NSObject

{
    unsigned char _requireAck;
    _Bool _requireEncyption;
    NSUUID *_clientUUID;
}

@property unsigned char requireAck;
@property _Bool requireEncyption;
@property (retain) NSUUID *clientUUID;

- (id)description;

@end
