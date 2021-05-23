/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRSendButtonEventMessageProtobuf : PBCodable

{
    unsigned int _usage;
    unsigned int _usagePage;
    _Bool _buttonDown;
    struct {
        unsigned int usage:1;
        unsigned int usagePage:1;
        unsigned int buttonDown:1;
    } _has;
}

@property (nonatomic) _Bool hasUsagePage;
@property (nonatomic) unsigned int usagePage;
@property (nonatomic) _Bool hasUsage;
@property (nonatomic) unsigned int usage;
@property (nonatomic) _Bool hasButtonDown;
@property (nonatomic) _Bool buttonDown;

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
