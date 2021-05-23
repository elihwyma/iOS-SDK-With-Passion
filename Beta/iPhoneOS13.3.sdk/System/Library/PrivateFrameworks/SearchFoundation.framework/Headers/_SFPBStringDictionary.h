/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBStringDictionary : PBCodable <Swift>

{
    NSArray *_keyValues;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *keyValues;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithNSDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addKeyValues:(id)arg1;
- (void)clearKeyValues;
- (unsigned long long)keyValuesCount;
- (id)keyValuesAtIndex:(unsigned long long)arg1;

@end
