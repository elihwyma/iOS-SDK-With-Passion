/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RMSPairingChallengeResponseMessage : PBCodable

{
    NSString *_code;
    int _sessionIdentifier;
    _Bool _userCancelled;
    struct {
        unsigned int sessionIdentifier:1;
        unsigned int userCancelled:1;
    } _has;
}

@property (nonatomic) _Bool hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (nonatomic, readonly) _Bool hasCode;
@property (retain, nonatomic) NSString *code;
@property (nonatomic) _Bool hasUserCancelled;
@property (nonatomic) _Bool userCancelled;

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
