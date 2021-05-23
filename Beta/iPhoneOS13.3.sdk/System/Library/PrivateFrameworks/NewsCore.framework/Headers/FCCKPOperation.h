/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCCKPOperation : PBCodable <Swift>

{
    NSString *_operationUUID;
    int _type;
    _Bool _last;
    _Bool _synchronousMode;
    struct {
        unsigned int type:1;
        unsigned int last:1;
        unsigned int synchronousMode:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasOperationUUID;
@property (retain, nonatomic) NSString *operationUUID;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasSynchronousMode;
@property (nonatomic) _Bool synchronousMode;
@property (nonatomic) _Bool hasLast;
@property (nonatomic) _Bool last;

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

@end
