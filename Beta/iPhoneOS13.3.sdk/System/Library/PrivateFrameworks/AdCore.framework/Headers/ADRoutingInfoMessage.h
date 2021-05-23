/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ADRoutingInfoMessage : PBCodable

{
    NSString *_environmentURL;
    NSString *_protoVersion;
    NSString *_searchType;
}

@property (retain, nonatomic) NSString *searchType;
@property (retain, nonatomic) NSString *environmentURL;
@property (retain, nonatomic) NSString *protoVersion;

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
