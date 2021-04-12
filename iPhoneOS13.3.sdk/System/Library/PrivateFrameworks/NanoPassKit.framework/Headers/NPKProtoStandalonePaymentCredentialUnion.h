//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NPKProtoStandaloneCreditAccountCredential, NPKProtoStandalonePaymentRemoteCredential, NSString;

@interface NPKProtoStandalonePaymentCredentialUnion : PBCodable <NSCopying>
{
    NPKProtoStandaloneCreditAccountCredential *_creditAccountCredential;
    NSString *_flowIdentifier;
    NPKProtoStandalonePaymentRemoteCredential *_remoteCredential;
}

@property(retain, nonatomic) NPKProtoStandaloneCreditAccountCredential *creditAccountCredential; // @synthesize creditAccountCredential=_creditAccountCredential;
@property(retain, nonatomic) NPKProtoStandalonePaymentRemoteCredential *remoteCredential; // @synthesize remoteCredential=_remoteCredential;
@property(retain, nonatomic) NSString *flowIdentifier; // @synthesize flowIdentifier=_flowIdentifier;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCreditAccountCredential;
@property(readonly, nonatomic) BOOL hasRemoteCredential;
@property(readonly, nonatomic) BOOL hasFlowIdentifier;

@end

