/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDMailUserSuggestionsEngagment : PBCodable

{
    long long _searchTermLength;
    _Bool _topHitsPresent;
    _Bool _userSelectedTopHit;
    struct {
        unsigned int searchTermLength:1;
        unsigned int topHitsPresent:1;
        unsigned int userSelectedTopHit:1;
    } _has;
}

@property (nonatomic) _Bool hasTopHitsPresent;
@property (nonatomic) _Bool topHitsPresent;
@property (nonatomic) _Bool hasUserSelectedTopHit;
@property (nonatomic) _Bool userSelectedTopHit;
@property (nonatomic) _Bool hasSearchTermLength;
@property (nonatomic) long long searchTermLength;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithSearchTermLength:(unsigned long long)arg1 topHitsPresent:(_Bool)arg2 userSelectedTopHit:(_Bool)arg3;

@end
