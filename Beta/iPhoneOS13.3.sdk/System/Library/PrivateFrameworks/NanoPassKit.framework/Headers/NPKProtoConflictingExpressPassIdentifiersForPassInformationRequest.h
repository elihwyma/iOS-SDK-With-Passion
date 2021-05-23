/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSMutableArray;

@interface NPKProtoConflictingExpressPassIdentifiersForPassInformationRequest : PBRequest

{
    NSData *_expressPassInformation;
    NSMutableArray *_referenceExpressPassesInformations;
}

@property (nonatomic, readonly) _Bool hasExpressPassInformation;
@property (retain, nonatomic) NSData *expressPassInformation;
@property (retain, nonatomic) NSMutableArray *referenceExpressPassesInformations;

+ (Class)referenceExpressPassesInformationType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addReferenceExpressPassesInformation:(id)arg1;
- (unsigned long long)referenceExpressPassesInformationsCount;
- (void)clearReferenceExpressPassesInformations;
- (id)referenceExpressPassesInformationAtIndex:(unsigned long long)arg1;

@end
