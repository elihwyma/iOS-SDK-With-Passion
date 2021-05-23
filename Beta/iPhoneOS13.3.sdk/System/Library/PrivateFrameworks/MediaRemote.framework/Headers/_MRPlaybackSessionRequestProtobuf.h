/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface _MRPlaybackSessionRequestProtobuf : PBCodable

{
    NSString *_identifier;
    int _length;
    int _location;
    NSString *_requestID;
    NSString *_type;
    struct {
        unsigned int length:1;
        unsigned int location:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasLocation;
@property (nonatomic) int location;
@property (nonatomic) _Bool hasLength;
@property (nonatomic) int length;
@property (nonatomic, readonly) _Bool hasType;
@property (retain, nonatomic) NSString *type;

+ (void)initialize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)customDescription;

@end
