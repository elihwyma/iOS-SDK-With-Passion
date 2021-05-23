/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBContactImage : PBCodable <Swift>

{
    _Bool _threeDTouchEnabled;
    NSString *_contactIdentifier;
    NSArray *_contactIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (nonatomic) _Bool threeDTouchEnabled;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addContactIdentifiers:(id)arg1;
- (void)clearContactIdentifiers;
- (unsigned long long)contactIdentifiersCount;
- (id)contactIdentifiersAtIndex:(unsigned long long)arg1;

@end
