/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface NTPBViewArticleRequest : PBRequest

{
    NSString *_feedUri;
    NSString *_storeFrontId;
    NSString *_webPageUri;
}

@property (nonatomic, readonly) _Bool hasWebPageUri;
@property (retain, nonatomic) NSString *webPageUri;
@property (nonatomic, readonly) _Bool hasFeedUri;
@property (retain, nonatomic) NSString *feedUri;
@property (nonatomic, readonly) _Bool hasStoreFrontId;
@property (retain, nonatomic) NSString *storeFrontId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
