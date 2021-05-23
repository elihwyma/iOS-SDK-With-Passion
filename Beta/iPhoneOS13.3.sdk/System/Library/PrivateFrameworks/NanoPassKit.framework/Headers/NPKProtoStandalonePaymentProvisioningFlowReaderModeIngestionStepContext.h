/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext : PBCodable

{
    float _ingestionProgress;
    int _ingestionState;
    NSString *_physicalCardImageURL;
    NSString *_subtitle;
    NSString *_title;
    struct {
        unsigned int ingestionProgress:1;
        unsigned int ingestionState:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasPhysicalCardImageURL;
@property (retain, nonatomic) NSString *physicalCardImageURL;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) _Bool hasIngestionState;
@property (nonatomic) int ingestionState;
@property (nonatomic) _Bool hasIngestionProgress;
@property (nonatomic) float ingestionProgress;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)ingestionStateAsString:(int)arg1;
- (int)StringAsIngestionState:(id)arg1;

@end
