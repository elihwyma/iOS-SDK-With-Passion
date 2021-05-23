/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NPKProtoStandaloneRequestHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleReaderModeFieldsRequest : PBRequest

{
    NSMutableArray *_readerModeFields;
    NPKProtoStandaloneRequestHeader *_requestHeader;
}

@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader;
@property (retain, nonatomic) NSMutableArray *readerModeFields;

+ (Class)readerModeFieldsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addReaderModeFields:(id)arg1;
- (unsigned long long)readerModeFieldsCount;
- (void)clearReaderModeFields;
- (id)readerModeFieldsAtIndex:(unsigned long long)arg1;

@end
