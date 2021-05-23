/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface NPKProtoSignDataRequest : PBRequest

{
    NSString *_aid;
    NSData *_dataToSign;
    NSData *_digestToSign;
    int _entanglementMode;
    struct {
        unsigned int entanglementMode:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasDataToSign;
@property (retain, nonatomic) NSData *dataToSign;
@property (nonatomic, readonly) _Bool hasDigestToSign;
@property (retain, nonatomic) NSData *digestToSign;
@property (nonatomic) _Bool hasEntanglementMode;
@property (nonatomic) int entanglementMode;
@property (nonatomic, readonly) _Bool hasAid;
@property (retain, nonatomic) NSString *aid;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)entanglementModeAsString:(int)arg1;
- (int)StringAsEntanglementMode:(id)arg1;

@end
