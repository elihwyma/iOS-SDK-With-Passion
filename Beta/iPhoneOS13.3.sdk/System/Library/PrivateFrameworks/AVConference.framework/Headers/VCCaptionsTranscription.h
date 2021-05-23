/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCCaptionsTranscription : PBCodable

{
    NSMutableArray *_segments;
    unsigned int _updateNumber;
    unsigned int _utteranceNumber;
    _Bool _isFinal;
    _Bool _isLocal;
    struct {
        unsigned int isFinal:1;
        unsigned int isLocal:1;
    } _has;
}

@property (nonatomic) unsigned int utteranceNumber;
@property (nonatomic) unsigned int updateNumber;
@property (nonatomic) _Bool hasIsLocal;
@property (nonatomic) _Bool isLocal;
@property (nonatomic) _Bool hasIsFinal;
@property (nonatomic) _Bool isFinal;
@property (retain, nonatomic) NSMutableArray *segments;

+ (Class)segmentsType;

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
- (void)addSegments:(id)arg1;
- (unsigned long long)segmentsCount;
- (void)clearSegments;
- (id)segmentsAtIndex:(unsigned long long)arg1;

@end
