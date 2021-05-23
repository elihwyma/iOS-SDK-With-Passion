/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBBackgroundSubscriptionValidation : PBCodable

{
    NSString *_errorCode;
    NSString *_errorMessage;
    int _resultType;
    NSString *_sourceChannelId;
    struct {
        unsigned int resultType:1;
    } _has;
}

@property (nonatomic) _Bool hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic, readonly) _Bool hasErrorMessage;
@property (retain, nonatomic) NSString *errorMessage;
@property (nonatomic, readonly) _Bool hasErrorCode;
@property (retain, nonatomic) NSString *errorCode;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
