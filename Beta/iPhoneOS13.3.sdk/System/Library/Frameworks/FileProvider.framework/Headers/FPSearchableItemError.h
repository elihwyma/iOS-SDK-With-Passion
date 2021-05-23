/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPSearchableItemError : PBCodable

{
    long long _code;
    NSString *_customDomain;
    int _domain;
}

@property (nonatomic) int domain;
@property (nonatomic) long long code;
@property (nonatomic, readonly) _Bool hasCustomDomain;
@property (retain, nonatomic) NSString *customDomain;

+ (id)stringFromError:(id)arg1;
+ (id)errorFromString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)domainAsString:(int)arg1;
- (int)StringAsDomain:(id)arg1;

@end
