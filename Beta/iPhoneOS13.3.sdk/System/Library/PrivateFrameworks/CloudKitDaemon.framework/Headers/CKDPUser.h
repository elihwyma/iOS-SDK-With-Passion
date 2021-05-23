/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier, CKDPProtectionInfo, CKDPUserAlias, NSString;

__attribute__((visibility("hidden")))
@interface CKDPUser : PBCodable

{
    CKDPUserAlias *_alias;
    NSString *_firstName;
    CKDPIdentifier *_identifier;
    NSString *_lastName;
    CKDPProtectionInfo *_protectionInfo;
    _Bool _isInNetwork;
    struct {
        unsigned int isInNetwork:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) CKDPIdentifier *identifier;
@property (nonatomic, readonly) _Bool hasAlias;
@property (retain, nonatomic) CKDPUserAlias *alias;
@property (nonatomic, readonly) _Bool hasFirstName;
@property (retain, nonatomic) NSString *firstName;
@property (nonatomic, readonly) _Bool hasLastName;
@property (retain, nonatomic) NSString *lastName;
@property (nonatomic, readonly) _Bool hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (nonatomic) _Bool hasIsInNetwork;
@property (nonatomic) _Bool isInNetwork;

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
