/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBDate;

@interface _SFPBProductInventory : PBCodable <Swift>

{
    int _type;
    int _availabilityStatus;
    float _distance;
    int _distanceUnit;
    NSString *_storeId;
    _SFPBDate *_timestamp;
    NSString *_storeName;
    NSString *_storeAddress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *storeId;
@property (nonatomic) int availabilityStatus;
@property (nonatomic) float distance;
@property (nonatomic) int distanceUnit;
@property (retain, nonatomic) _SFPBDate *timestamp;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *storeAddress;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
