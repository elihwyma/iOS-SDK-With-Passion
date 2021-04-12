//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class CKCDPError, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceResponse : PBCodable <NSCopying>
{
    NSMutableArray *_assetAuthorizationResponses;
    CKCDPError *_error;
    NSData *_serializedResult;
}

+ (Class)assetAuthorizationResponsesType;
@property(retain, nonatomic) NSMutableArray *assetAuthorizationResponses; // @synthesize assetAuthorizationResponses=_assetAuthorizationResponses;
@property(retain, nonatomic) CKCDPError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *serializedResult; // @synthesize serializedResult=_serializedResult;
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
- (id)assetAuthorizationResponsesAtIndex:(NSUInteger)arg1;
- (NSUInteger)assetAuthorizationResponsesCount;
- (void)addAssetAuthorizationResponses:(id)arg1;
- (void)clearAssetAuthorizationResponses;
@property(readonly, nonatomic) BOOL hasError;
@property(readonly, nonatomic) BOOL hasSerializedResult;

@end

