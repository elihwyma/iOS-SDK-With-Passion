/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBTodaySectionConfigFont : PBCodable

{
    NSString *_name;
    NSString *_urlString;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasUrlString;
@property (retain, nonatomic) NSString *urlString;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
