/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PBBProtoWarrantySentinel : PBCodable

{
    NSMutableArray *_appleLanguages;
    NSString *_appleLocale;
    NSString *_deviceName;
    _Bool _removeSentinel;
    _Bool _sentinelExists;
    struct {
        unsigned int removeSentinel:1;
        unsigned int sentinelExists:1;
    } _has;
}

@property (nonatomic) _Bool hasSentinelExists;
@property (nonatomic) _Bool sentinelExists;
@property (nonatomic) _Bool hasRemoveSentinel;
@property (nonatomic) _Bool removeSentinel;
@property (retain, nonatomic) NSMutableArray *appleLanguages;
@property (nonatomic, readonly) _Bool hasAppleLocale;
@property (retain, nonatomic) NSString *appleLocale;
@property (nonatomic, readonly) _Bool hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;

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
