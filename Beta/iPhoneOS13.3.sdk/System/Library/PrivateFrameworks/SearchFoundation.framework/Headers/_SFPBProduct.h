/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBURL;

@interface _SFPBProduct : PBCodable <Swift>

{
    _Bool _buyable;
    NSString *_identifier;
    NSString *_productIdentifier;
    _SFPBURL *_availabilityURL;
    NSString *_displayName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *productIdentifier;
@property (retain, nonatomic) _SFPBURL *availabilityURL;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) _Bool buyable;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
