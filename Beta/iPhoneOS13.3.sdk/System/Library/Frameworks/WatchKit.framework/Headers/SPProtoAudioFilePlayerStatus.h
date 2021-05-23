/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SPProtoAudioFilePlayerStatus : PBCodable

{
    long long _errorCode;
    NSData *_errorDict;
    NSString *_errorDomain;
    NSString *_identifier;
    int _status;
    struct {
        unsigned int errorCode:1;
        unsigned int status:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic, readonly) _Bool hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) long long errorCode;
@property (nonatomic, readonly) _Bool hasErrorDict;
@property (retain, nonatomic) NSData *errorDict;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sockPuppetMessageForPlayerItemSetStatus;
- (id)sockPuppetMessageForQueuePlayerSetStatus;

@end
