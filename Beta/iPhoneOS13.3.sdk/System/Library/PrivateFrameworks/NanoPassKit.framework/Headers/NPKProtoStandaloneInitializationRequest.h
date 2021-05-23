/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NPKProtoStandaloneRequestHeader;

@interface NPKProtoStandaloneInitializationRequest : PBRequest

{
    NPKProtoStandaloneRequestHeader *_requestHeader;
    _Bool _separateLocalDeviceEntryRequired;
    _Bool _useSimulatedFlowController;
    struct {
        unsigned int separateLocalDeviceEntryRequired:1;
        unsigned int useSimulatedFlowController:1;
    } _has;
}

@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader;
@property (nonatomic) _Bool hasUseSimulatedFlowController;
@property (nonatomic) _Bool useSimulatedFlowController;
@property (nonatomic) _Bool hasSeparateLocalDeviceEntryRequired;
@property (nonatomic) _Bool separateLocalDeviceEntryRequired;

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
