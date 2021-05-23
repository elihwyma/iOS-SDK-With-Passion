/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARBagRequest : PBCodable

{
    int _tuscanyOption;
    NSString *_countryCode;
    NSString *_secretKey;
    NSString *_locale;
    NSString *_effectiveSystemLanguage;
    NSArray *_preferredLanguages;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *effectiveSystemLanguage;
@property (copy, nonatomic) NSArray *preferredLanguages;
@property (nonatomic) int tuscanyOption;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addPreferredLanguages:(id)arg1;
- (void)clearPreferredLanguages;
- (unsigned long long)preferredLanguagesCount;
- (id)preferredLanguagesAtIndex:(unsigned long long)arg1;

@end
