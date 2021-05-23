/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface ADKeyedParameterList : PBCodable

{
    NSString *_key;
    NSMutableArray *_parameterLists;
}

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *parameterLists;

+ (id)options;
+ (Class)parameterListType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addParameterList:(id)arg1;
- (unsigned long long)parameterListsCount;
- (void)clearParameterLists;
- (id)parameterListAtIndex:(unsigned long long)arg1;

@end
