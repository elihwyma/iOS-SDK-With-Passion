/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSUUID;

@interface WPPeerTrackingRequest : NSObject

{
    unsigned char _clientType;
    NSUUID *_peerUUID;
    NSDictionary *_peerTrackingDictionary;
}

@property unsigned char clientType;
@property (retain) NSUUID *peerUUID;
@property (retain) NSDictionary *peerTrackingDictionary;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
