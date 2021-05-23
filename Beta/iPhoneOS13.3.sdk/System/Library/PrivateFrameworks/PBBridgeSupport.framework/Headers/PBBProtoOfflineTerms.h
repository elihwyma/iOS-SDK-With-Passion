/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface PBBProtoOfflineTerms : PBCodable

{
    NSMutableArray *_appleLanguages;
    NSString *_countryCode;
    NSString *_languageCode;
    NSData *_license;
    NSData *_multiterms;
    NSData *_warranty;
}

@property (nonatomic, readonly) _Bool hasLicense;
@property (retain, nonatomic) NSData *license;
@property (nonatomic, readonly) _Bool hasMultiterms;
@property (retain, nonatomic) NSData *multiterms;
@property (nonatomic, readonly) _Bool hasWarranty;
@property (retain, nonatomic) NSData *warranty;
@property (nonatomic, readonly) _Bool hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic, readonly) _Bool hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSMutableArray *appleLanguages;

+ (Class)appleLanguagesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAppleLanguages:(id)arg1;
- (unsigned long long)appleLanguagesCount;
- (void)clearAppleLanguages;
- (id)appleLanguagesAtIndex:(unsigned long long)arg1;

@end
