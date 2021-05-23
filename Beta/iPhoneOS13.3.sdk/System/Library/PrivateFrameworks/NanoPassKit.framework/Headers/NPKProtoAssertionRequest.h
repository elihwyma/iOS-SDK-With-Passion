/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface NPKProtoAssertionRequest : PBRequest

{
    int _assertionType;
    NSString *_requestUUIDString;
    _Bool _pending;
    struct {
        unsigned int assertionType:1;
        unsigned int pending:1;
    } _has;
}

@property (retain, nonatomic) NSString *requestUUIDString;
@property (nonatomic) _Bool hasAssertionType;
@property (nonatomic) int assertionType;
@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)assertionTypeAsString:(int)arg1;
- (int)StringAsAssertionType:(id)arg1;

@end
