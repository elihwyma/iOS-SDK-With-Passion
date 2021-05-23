/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NNMKProtoAccountAuthenticationState : PBCodable

{
    NSString *_accountId;
    NSString *_displayName;
    unsigned int _standaloneState;
    NSString *_subsectionId;
    struct {
        unsigned int standaloneState:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAccountId;
@property (retain, nonatomic) NSString *accountId;
@property (nonatomic) _Bool hasStandaloneState;
@property (nonatomic) unsigned int standaloneState;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic, readonly) _Bool hasSubsectionId;
@property (retain, nonatomic) NSString *subsectionId;

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
