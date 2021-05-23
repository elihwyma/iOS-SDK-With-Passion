/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface NPKProtoPasscodeUpgradeFlowShouldExitRequest : PBRequest

{
    NSData *_errorData;
    _Bool _passcodeChanged;
    struct {
        unsigned int passcodeChanged:1;
    } _has;
}

@property (nonatomic) _Bool hasPasscodeChanged;
@property (nonatomic) _Bool passcodeChanged;
@property (nonatomic, readonly) _Bool hasErrorData;
@property (retain, nonatomic) NSData *errorData;

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
