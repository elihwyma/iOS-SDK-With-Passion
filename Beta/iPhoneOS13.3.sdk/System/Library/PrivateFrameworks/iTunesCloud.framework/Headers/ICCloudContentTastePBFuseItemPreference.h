/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSString;

@interface ICCloudContentTastePBFuseItemPreference : PBCodable <Swift>

{
    long long _adamId;
    long long _createdOffsetMillis;
    NSString *_externalId;
    int _preference;
    int _preferenceType;
    struct {
        unsigned int adamId:1;
        unsigned int createdOffsetMillis:1;
        unsigned int preferenceType:1;
    } _has;
}

@property (nonatomic) int preference;
@property (nonatomic) _Bool hasAdamId;
@property (nonatomic) long long adamId;
@property (nonatomic, readonly) _Bool hasExternalId;
@property (retain, nonatomic) NSString *externalId;
@property (nonatomic) _Bool hasCreatedOffsetMillis;
@property (nonatomic) long long createdOffsetMillis;
@property (nonatomic) _Bool hasPreferenceType;
@property (nonatomic) int preferenceType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
