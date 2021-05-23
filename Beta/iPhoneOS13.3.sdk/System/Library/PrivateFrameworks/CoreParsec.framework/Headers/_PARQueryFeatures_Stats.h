/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARQueryFeatures_Stats : PBCodable

{
    NSArray *_Ceps;
    NSArray *_CepLongs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *Ceps;
@property (copy, nonatomic) NSArray *CepLongs;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addCep:(id)arg1;
- (void)addCepLong:(id)arg1;
- (void)clearCep;
- (unsigned long long)CepCount;
- (id)CepAtIndex:(unsigned long long)arg1;
- (void)clearCepLong;
- (unsigned long long)CepLongCount;
- (id)CepLongAtIndex:(unsigned long long)arg1;
- (void)setCep:(id)arg1;
- (void)setCepLong:(id)arg1;

@end
