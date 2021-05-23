/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoPassSyncState, NSData;

@interface NPKProtoPassSyncReconciledStateUnrecognized : PBCodable

{
    NPKProtoPassSyncState *_libraryPassSyncState;
    NSData *_unrecognizedReconciledStateHash;
}

@property (nonatomic, readonly) _Bool hasUnrecognizedReconciledStateHash;
@property (retain, nonatomic) NSData *unrecognizedReconciledStateHash;
@property (nonatomic, readonly) _Bool hasLibraryPassSyncState;
@property (retain, nonatomic) NPKProtoPassSyncState *libraryPassSyncState;

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
