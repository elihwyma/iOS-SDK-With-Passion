/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/Swift-Protocol.h>

@class NSString;

@protocol TBAccessPoint <Swift>

@property (nonatomic, readonly) NSString *BSSID;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly, getter=isEdge) _Bool edge;
@property (nonatomic, readonly, getter=isTCPGood) _Bool TCPGood;

- (unsigned short)dictionaryRepresentation;

@end
