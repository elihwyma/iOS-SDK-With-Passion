/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface _MRTextInputMessageProtobuf : PBCodable

{
    double _timestamp;
    int _actionType;
    NSString *_text;
    struct {
        unsigned int timestamp:1;
        unsigned int actionType:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) _Bool hasText;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) _Bool hasActionType;
@property (nonatomic) int actionType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
- (int)StringAsActionType:(id)arg1;

@end
