/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface ASCodableCloudKitRelationship : PBCodable

{
    long long _eventCount;
    NSMutableArray *_addresses;
    NSString *_cloudKitAddress;
    NSMutableArray *_events;
    NSString *_incomingHandshakeToken;
    NSString *_outgoingHandshakeToken;
    NSString *_preferredReachableAddress;
    NSString *_preferredReachableService;
    unsigned int _supportedPhoneFeatures;
    unsigned int _supportedWatchFeatures;
    NSData *_uuid;
    struct {
        unsigned int eventCount:1;
        unsigned int supportedPhoneFeatures:1;
        unsigned int supportedWatchFeatures:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic, readonly) _Bool hasIncomingHandshakeToken;
@property (retain, nonatomic) NSString *incomingHandshakeToken;
@property (nonatomic, readonly) _Bool hasOutgoingHandshakeToken;
@property (retain, nonatomic) NSString *outgoingHandshakeToken;
@property (nonatomic, readonly) _Bool hasCloudKitAddress;
@property (retain, nonatomic) NSString *cloudKitAddress;
@property (retain, nonatomic) NSMutableArray *addresses;
@property (nonatomic, readonly) _Bool hasPreferredReachableAddress;
@property (retain, nonatomic) NSString *preferredReachableAddress;
@property (nonatomic, readonly) _Bool hasPreferredReachableService;
@property (retain, nonatomic) NSString *preferredReachableService;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) _Bool hasEventCount;
@property (nonatomic) long long eventCount;
@property (nonatomic) _Bool hasSupportedPhoneFeatures;
@property (nonatomic) unsigned int supportedPhoneFeatures;
@property (nonatomic) _Bool hasSupportedWatchFeatures;
@property (nonatomic) unsigned int supportedWatchFeatures;

+ (Class)eventsType;
+ (Class)addressesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addEvents:(id)arg1;
- (unsigned long long)eventsCount;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (void)addAddresses:(id)arg1;
- (unsigned long long)addressesCount;
- (void)clearAddresses;
- (id)addressesAtIndex:(unsigned long long)arg1;

@end
