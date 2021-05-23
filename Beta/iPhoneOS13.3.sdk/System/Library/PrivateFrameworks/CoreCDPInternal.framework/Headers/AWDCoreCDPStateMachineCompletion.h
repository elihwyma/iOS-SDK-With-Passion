/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDCoreCDPStateMachineCompletion : PBCodable

{
    long long _errorCode;
    unsigned long long _timestamp;
    NSString *_errorDomain;
    _Bool _cloudDataProtectionEnabled;
    _Bool _shouldCompleteSignIn;
    struct {
        unsigned int errorCode:1;
        unsigned int timestamp:1;
        unsigned int cloudDataProtectionEnabled:1;
        unsigned int shouldCompleteSignIn:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasShouldCompleteSignIn;
@property (nonatomic) _Bool shouldCompleteSignIn;
@property (nonatomic) _Bool hasCloudDataProtectionEnabled;
@property (nonatomic) _Bool cloudDataProtectionEnabled;
@property (nonatomic, readonly) _Bool hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) long long errorCode;

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
