/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoPassSyncState;

@interface NPKProtoPassSyncProposedReconciledState : PBCodable

{
    NPKProtoPassSyncState *_proposedReconciledState;
}

@property (nonatomic, readonly) _Bool hasProposedReconciledState;
@property (retain, nonatomic) NPKProtoPassSyncState *proposedReconciledState;

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
