/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBErrorResponse : PBCodable

{
    NSMutableArray *_errors;
}

@property (retain, nonatomic) NSMutableArray *errors;

+ (Class)errorsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addErrors:(id)arg1;
- (unsigned long long)errorsCount;
- (void)clearErrors;
- (id)errorsAtIndex:(unsigned long long)arg1;

@end
