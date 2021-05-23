/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ADAdVector : PBCodable

{
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _vectors;
    NSString *_version;
}

@property (nonatomic, readonly) _Bool hasVersion;
@property (retain, nonatomic) NSString *version;
@property (nonatomic, readonly) unsigned long long vectorsCount;
@property (nonatomic, readonly) double *vectors;

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
- (void)addVector:(double)arg1;
- (double)vectorAtIndex:(unsigned long long)arg1;
- (void)clearVectors;
- (void)setVectors:(double *)arg1 count:(unsigned long long)arg2;

@end
