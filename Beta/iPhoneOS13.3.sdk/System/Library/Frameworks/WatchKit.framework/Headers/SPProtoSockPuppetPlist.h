/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface SPProtoSockPuppetPlist : PBCodable

{
    NSMutableArray *_objects;
}

@property (retain, nonatomic) NSMutableArray *objects;

+ (Class)objectType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)objectsCount;
- (void)clearObjects;

@end
