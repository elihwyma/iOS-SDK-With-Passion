/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NPKProtoConflictingExpressPassIdentifiersForPassInformationResponse : PBCodable

{
    NSMutableArray *_conflictingExpressPassIdentifiers;
    NSMutableArray *_conflictingReferenceExpressPassIdentifiers;
    _Bool _pending;
    CDStruct_eab6c78c _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (retain, nonatomic) NSMutableArray *conflictingExpressPassIdentifiers;
@property (retain, nonatomic) NSMutableArray *conflictingReferenceExpressPassIdentifiers;

+ (Class)conflictingExpressPassIdentifiersType;
+ (Class)conflictingReferenceExpressPassIdentifiersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addConflictingExpressPassIdentifiers:(id)arg1;
- (void)addConflictingReferenceExpressPassIdentifiers:(id)arg1;
- (unsigned long long)conflictingExpressPassIdentifiersCount;
- (void)clearConflictingExpressPassIdentifiers;
- (id)conflictingExpressPassIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictingReferenceExpressPassIdentifiersCount;
- (void)clearConflictingReferenceExpressPassIdentifiers;
- (id)conflictingReferenceExpressPassIdentifiersAtIndex:(unsigned long long)arg1;

@end
