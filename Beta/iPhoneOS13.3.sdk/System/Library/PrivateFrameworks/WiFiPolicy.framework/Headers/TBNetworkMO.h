/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <CoreData/NSManagedObject.h>

#import <WiFiPolicy/Swift-Protocol.h>

@class NSDate, NSSet, NSString, TBTileMO;

@protocol TBScore;

@interface TBNetworkMO : NSManagedObject <Swift>

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
@property (nonatomic) long long authMask;
@property (nonatomic) _Bool captive;
@property (copy, nonatomic) NSDate *created;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) _Bool moving;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int popularityScoreValue;
@property (nonatomic) _Bool public;
@property (nonatomic) int qualityScoreValue;
@property (nonatomic) _Bool suspicious;
@property (nonatomic) long long tileKey;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) NSSet *accessPoints;
@property (retain, nonatomic) TBTileMO *tile;

+ (_Bool)supportsSecureCoding;
+ (id)fetchRequest;
+ (id)entityName;
+ (void)removeAllNetworksInMOC:(id)arg1;
+ (id)generateNewNetworkObjectFromMOC:(id)arg1;
+ (void)removeNetworksUsingPredicate:(id)arg1 moc:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;

@end
