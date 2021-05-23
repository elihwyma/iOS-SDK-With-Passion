/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NPKProtoStandaloneRequestHeader, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseFlowRequest : PBRequest

{
    NSString *_chosenFlowPickerItemIdentifier;
    NPKProtoStandaloneRequestHeader *_requestHeader;
}

@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader;
@property (nonatomic, readonly) _Bool hasChosenFlowPickerItemIdentifier;
@property (retain, nonatomic) NSString *chosenFlowPickerItemIdentifier;

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
