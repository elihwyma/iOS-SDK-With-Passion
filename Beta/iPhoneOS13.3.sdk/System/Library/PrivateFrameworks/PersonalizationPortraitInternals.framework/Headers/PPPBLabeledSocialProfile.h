/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PPPBLabeledSocialProfile : PBCodable

{
    NSString *_label;
    NSString *_service;
    NSString *_urlString;
    NSString *_userIdentifier;
    NSString *_username;
}

@property (nonatomic, readonly) _Bool hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic, readonly) _Bool hasUrlString;
@property (retain, nonatomic) NSString *urlString;
@property (nonatomic, readonly) _Bool hasUsername;
@property (retain, nonatomic) NSString *username;
@property (nonatomic, readonly) _Bool hasUserIdentifier;
@property (retain, nonatomic) NSString *userIdentifier;
@property (nonatomic, readonly) _Bool hasService;
@property (retain, nonatomic) NSString *service;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
