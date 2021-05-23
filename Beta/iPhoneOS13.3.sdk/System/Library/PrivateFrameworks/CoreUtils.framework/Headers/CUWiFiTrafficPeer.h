/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString;

@interface CUWiFiTrafficPeer : NSObject

{
    _Bool _active;
    unsigned int _trafficFlags;
    NSString *_sessionID;
    CDUnion_fab80606 _peerIP;
}

@property (nonatomic) _Bool active;
@property (nonatomic) CDUnion_fab80606 peerIP;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned int trafficFlags;

- (id)peerMACAddressData;

@end
