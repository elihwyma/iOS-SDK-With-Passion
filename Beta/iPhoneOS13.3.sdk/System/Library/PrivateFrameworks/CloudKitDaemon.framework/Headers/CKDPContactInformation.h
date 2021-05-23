/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPContactInformation : PBCodable

{
    NSString *_containerScopedUserId;
    NSString *_emailAddress;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_phoneNumber;
}

@property (nonatomic, readonly) _Bool hasEmailAddress;
@property (retain, nonatomic) NSString *emailAddress;
@property (nonatomic, readonly) _Bool hasContainerScopedUserId;
@property (retain, nonatomic) NSString *containerScopedUserId;
@property (nonatomic, readonly) _Bool hasFirstName;
@property (retain, nonatomic) NSString *firstName;
@property (nonatomic, readonly) _Bool hasLastName;
@property (retain, nonatomic) NSString *lastName;
@property (nonatomic, readonly) _Bool hasPhoneNumber;
@property (retain, nonatomic) NSString *phoneNumber;

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
