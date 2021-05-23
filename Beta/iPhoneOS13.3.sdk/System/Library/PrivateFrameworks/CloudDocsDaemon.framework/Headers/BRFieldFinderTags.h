/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSMutableArray;

@interface BRFieldFinderTags : PBCodable <Swift>

{
    NSMutableArray *_tags;
}

@property (retain, nonatomic) NSMutableArray *tags;

+ (Class)tagsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)tagsCount;
- (void)addTags:(id)arg1;
- (void)clearTags;
- (id)tagsAtIndex:(unsigned long long)arg1;

@end
