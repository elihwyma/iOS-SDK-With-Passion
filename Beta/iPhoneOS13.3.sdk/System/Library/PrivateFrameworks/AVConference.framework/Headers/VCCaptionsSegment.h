/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCCaptionsSegment : PBCodable

{
    unsigned int _confidence;
    NSString *_text;
    _Bool _hasSpaceAfter;
    struct {
        unsigned int confidence:1;
        unsigned int hasSpaceAfter:1;
    } _has;
}

@property (nonatomic) _Bool hasConfidence;
@property (nonatomic) unsigned int confidence;
@property (nonatomic) _Bool hasHasSpaceAfter;
@property (nonatomic) _Bool hasSpaceAfter;
@property (nonatomic, readonly) _Bool hasText;
@property (retain, nonatomic) NSString *text;

- (void)dealloc;
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
