/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface NPKProtoSetPreferredPaymentApplicationRequest : PBRequest

{
    NSString *_passID;
    NSString *_preferredApplicationAID;
}

@property (nonatomic, readonly) _Bool hasPassID;
@property (retain, nonatomic) NSString *passID;
@property (nonatomic, readonly) _Bool hasPreferredApplicationAID;
@property (retain, nonatomic) NSString *preferredApplicationAID;

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
