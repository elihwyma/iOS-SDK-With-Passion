/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/Swift-Protocol.h>

@class NSSet, NSString;

@protocol TBNetwork <Swift>

@property (nonatomic, readonly) NSString *remoteIdentifier;
@property (nonatomic, readonly) NSString *SSID;
@property (nonatomic, readonly) unsigned long long authMask;
@property (nonatomic, readonly) NSString *authDescription;
@property (nonatomic, readonly) NSString *attributesDescription;
@property (nonatomic, readonly) NSSet *accessPoints;
@property (nonatomic, readonly, getter=isCaptive) _Bool captive;
@property (nonatomic, readonly, getter=isMoving) _Bool moving;
@property (nonatomic, readonly, getter=isSuspicious) _Bool suspicious;
@property (nonatomic, readonly, getter=isPublic) _Bool public;
@property (nonatomic, readonly) unsigned long long tileKey;

- (unsigned short)dictionaryRepresentation;

@end
