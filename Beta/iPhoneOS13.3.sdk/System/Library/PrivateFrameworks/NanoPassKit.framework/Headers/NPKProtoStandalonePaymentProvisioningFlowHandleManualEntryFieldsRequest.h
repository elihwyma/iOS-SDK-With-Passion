/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NPKProtoStandaloneRequestHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleManualEntryFieldsRequest : PBRequest

{
    NSMutableArray *_manualEntryFields;
    NPKProtoStandaloneRequestHeader *_requestHeader;
}

@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader;
@property (retain, nonatomic) NSMutableArray *manualEntryFields;

+ (Class)manualEntryFieldsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addManualEntryFields:(id)arg1;
- (unsigned long long)manualEntryFieldsCount;
- (void)clearManualEntryFields;
- (id)manualEntryFieldsAtIndex:(unsigned long long)arg1;

@end
