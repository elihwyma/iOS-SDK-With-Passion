/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBProductInventoryResult : PBCodable <Swift>

{
    NSString *_productIdentifier;
    NSArray *_availabilitys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSArray *availabilitys;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (void)setAvailability:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addAvailability:(id)arg1;
- (void)clearAvailability;
- (unsigned long long)availabilityCount;
- (id)availabilityAtIndex:(unsigned long long)arg1;

@end
