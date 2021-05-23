/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData, NSString;

@interface HDCodableAuthorizationResponseMessage : PBCodable <Swift>

{
    NSString *_appBundleIdentifier;
    NSString *_errorDescription;
    NSString *_hostAppName;
    NSData *_requestIdentifier;
    _Bool _shouldPrompt;
    struct {
        unsigned int shouldPrompt:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAppBundleIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (nonatomic, readonly) _Bool hasRequestIdentifier;
@property (retain, nonatomic) NSData *requestIdentifier;
@property (nonatomic) _Bool hasShouldPrompt;
@property (nonatomic) _Bool shouldPrompt;
@property (nonatomic, readonly) _Bool hasHostAppName;
@property (retain, nonatomic) NSString *hostAppName;
@property (nonatomic, readonly) _Bool hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

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
