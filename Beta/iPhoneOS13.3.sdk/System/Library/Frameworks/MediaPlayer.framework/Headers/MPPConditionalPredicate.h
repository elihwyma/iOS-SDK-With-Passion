/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <Swift>

{
    MPPMediaPredicate *_conditionalPredicate;
    MPPMediaPredicate *_elsePredicate;
    MPPMediaPredicate *_thenPredicate;
}

@property (nonatomic, readonly) _Bool hasConditionalPredicate;
@property (retain, nonatomic) MPPMediaPredicate *conditionalPredicate;
@property (nonatomic, readonly) _Bool hasThenPredicate;
@property (retain, nonatomic) MPPMediaPredicate *thenPredicate;
@property (nonatomic, readonly) _Bool hasElsePredicate;
@property (retain, nonatomic) MPPMediaPredicate *elsePredicate;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
