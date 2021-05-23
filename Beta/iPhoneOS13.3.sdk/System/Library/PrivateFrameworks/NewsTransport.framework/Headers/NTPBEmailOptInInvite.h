/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBEmailOptInInvite : PBCodable

{
    NSString *_articleId;
    int _emailOptInInviteLocation;
    NSString *_parentFeedId;
    int _parentFeedType;
    int _userAction;
    struct {
        unsigned int emailOptInInviteLocation:1;
        unsigned int parentFeedType:1;
        unsigned int userAction:1;
    } _has;
}

@property (nonatomic) _Bool hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) _Bool hasEmailOptInInviteLocation;
@property (nonatomic) int emailOptInInviteLocation;
@property (nonatomic) _Bool hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (nonatomic, readonly) _Bool hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
- (int)StringAsParentFeedType:(id)arg1;

@end
