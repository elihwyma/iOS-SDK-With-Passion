/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface NPKProtoPeerPaymentRegistrationRequest : PBRequest

{
    NSString *_serviceURL;
    _Bool _forceReRegistration;
    struct {
        unsigned int forceReRegistration:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasServiceURL;
@property (retain, nonatomic) NSString *serviceURL;
@property (nonatomic) _Bool hasForceReRegistration;
@property (nonatomic) _Bool forceReRegistration;

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
