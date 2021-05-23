/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ACProtobufDataclassAction : PBCodable

{
    NSMutableArray *_affectedContainers;
    int _type;
    _Bool _destructive;
}

@property (nonatomic) int type;
@property (nonatomic) _Bool destructive;
@property (retain, nonatomic) NSMutableArray *affectedContainers;

+ (Class)affectedContainersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAffectedContainers:(id)arg1;
- (unsigned long long)affectedContainersCount;
- (void)clearAffectedContainers;
- (id)affectedContainersAtIndex:(unsigned long long)arg1;

@end
