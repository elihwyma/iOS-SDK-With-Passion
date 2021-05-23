/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface NPKProtoSetExpressPassRequest : PBRequest

{
    NSString *_applicationIdentifier;
    NSData *_expressPassInformation;
    NSString *_uniqueID;
    _Bool _cancelOutstandingRequests;
    _Bool _requestAuthorization;
    struct {
        unsigned int cancelOutstandingRequests:1;
        unsigned int requestAuthorization:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) _Bool hasCancelOutstandingRequests;
@property (nonatomic) _Bool cancelOutstandingRequests;
@property (nonatomic, readonly) _Bool hasApplicationIdentifier;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) _Bool hasRequestAuthorization;
@property (nonatomic) _Bool requestAuthorization;
@property (nonatomic, readonly) _Bool hasExpressPassInformation;
@property (retain, nonatomic) NSData *expressPassInformation;

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
