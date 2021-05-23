/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface PBBProtoSendLanguageAndLocale : PBCodable

{
    NSMutableArray *_appleLanguages;
    NSString *_appleLocale;
    NSData *_archivedPreferences;
}

@property (retain, nonatomic) NSMutableArray *appleLanguages;
@property (nonatomic, readonly) _Bool hasAppleLocale;
@property (retain, nonatomic) NSString *appleLocale;
@property (nonatomic, readonly) _Bool hasArchivedPreferences;
@property (retain, nonatomic) NSData *archivedPreferences;

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
