/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <GeoServices/GEOWiFiBSS.h>

@class NSString;

@protocol TBScore;

@interface GEOWiFiBSS (Serialization)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <TBScore> popularityScore;
@property (nonatomic, readonly) id <TBScore> qualityScore;
@property (nonatomic, readonly) NSString *BSSID;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly, getter=isEdge) _Bool edge;
@property (nonatomic, readonly, getter=isTCPGood) _Bool TCPGood;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)_hasAttribute:(int)arg1;

@end
