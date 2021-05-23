/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NTPBRecordBase;

@interface NTPBChannelMembershipRecord : PBCodable

{
    NTPBRecordBase *_base;
    NSString *_channelID;
    NSString *_draftArticleListID;
    NSString *_draftIssueListID;
    _Bool _canAccessDrafts;
    struct {
        unsigned int canAccessDrafts:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (nonatomic, readonly) _Bool hasChannelID;
@property (retain, nonatomic) NSString *channelID;
@property (nonatomic) _Bool hasCanAccessDrafts;
@property (nonatomic) _Bool canAccessDrafts;
@property (nonatomic, readonly) _Bool hasDraftArticleListID;
@property (retain, nonatomic) NSString *draftArticleListID;
@property (nonatomic, readonly) _Bool hasDraftIssueListID;
@property (retain, nonatomic) NSString *draftIssueListID;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
