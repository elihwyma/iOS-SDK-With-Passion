/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <ProtocolBuffer/PBCodable.h>

@interface MPSStateResponse : PBCodable

{
    long long _retryAfterSeconds;
    long long _version;
    int _icplAction;
    int _mpsAction;
    struct {
        unsigned int retryAfterSeconds:1;
        unsigned int version:1;
        unsigned int icplAction:1;
        unsigned int mpsAction:1;
    } _has;
}

@property (nonatomic) _Bool hasRetryAfterSeconds;
@property (nonatomic) long long retryAfterSeconds;
@property (nonatomic) _Bool hasMpsAction;
@property (nonatomic) int mpsAction;
@property (nonatomic) _Bool hasIcplAction;
@property (nonatomic) int icplAction;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) long long version;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)mpsActionAsString:(int)arg1;
- (int)StringAsMpsAction:(id)arg1;
- (id)icplActionAsString:(int)arg1;
- (int)StringAsIcplAction:(id)arg1;

@end
