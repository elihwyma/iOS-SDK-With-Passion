/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <GeoServices/GEOWiFiESS.h>

@class NSSet, NSString;

@protocol TBScore;

@interface GEOWiFiESS (Serialization)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <TBScore> popularityScore;
@property (nonatomic, readonly) id <TBScore> qualityScore;
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

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)_hasAttribute:(int)arg1;

@end
