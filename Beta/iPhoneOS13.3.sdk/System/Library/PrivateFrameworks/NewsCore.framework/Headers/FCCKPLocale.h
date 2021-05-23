/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface FCCKPLocale : PBCodable <Swift>

{
    NSString *_activeKeyboard;
    NSMutableArray *_enabledKeyboards;
    NSString *_languageCode;
    NSString *_regionCode;
}

@property (nonatomic, readonly) _Bool hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic, readonly) _Bool hasRegionCode;
@property (retain, nonatomic) NSString *regionCode;
@property (retain, nonatomic) NSMutableArray *enabledKeyboards;
@property (nonatomic, readonly) _Bool hasActiveKeyboard;
@property (retain, nonatomic) NSString *activeKeyboard;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addEnabledKeyboards:(id)arg1;
- (unsigned long long)enabledKeyboardsCount;
- (void)clearEnabledKeyboards;
- (id)enabledKeyboardsAtIndex:(unsigned long long)arg1;

@end
