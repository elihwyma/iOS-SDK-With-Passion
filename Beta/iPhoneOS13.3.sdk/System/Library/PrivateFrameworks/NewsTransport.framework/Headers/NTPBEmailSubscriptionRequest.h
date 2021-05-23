/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface NTPBEmailSubscriptionRequest : PBRequest

{
    long long _dsId;
    NSString *_languageCode;
    NSString *_userStorefrontId;
    struct {
        unsigned int dsId:1;
    } _has;
}

@property (nonatomic) _Bool hasDsId;
@property (nonatomic) long long dsId;
@property (nonatomic, readonly) _Bool hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;
@property (nonatomic, readonly) _Bool hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
