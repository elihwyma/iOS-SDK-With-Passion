/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <CoreData/NSManagedObject.h>

#import <WiFiPolicy/Swift-Protocol.h>

@class NSDate, NSString, TBNetworkMO;

@protocol TBScore;

@interface TBAccessPointMO : NSManagedObject <Swift>

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
@property (copy, nonatomic) NSString *bssid;
@property (copy, nonatomic) NSDate *created;
@property (nonatomic) _Bool edge;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic) int popularityScoreValue;
@property (nonatomic) int qualityScoreValue;
@property (nonatomic) _Bool tcpGood;
@property (retain, nonatomic) TBNetworkMO *network;

+ (_Bool)supportsSecureCoding;
+ (id)fetchRequest;
+ (id)entityName;
+ (id)generateNewAccessPointObjectFromMOC:(id)arg1;
+ (void)removeAllAccessPointsInMOC:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;

@end
