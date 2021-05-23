/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NTPBDate;

@interface NTPBIssueReadingHistoryItem : PBCodable

{
    NSString *_identifier;
    NSString *_issueID;
    NTPBDate *_lastBadgedPBDate;
    NTPBDate *_lastEngagedPBDate;
    NTPBDate *_lastRemovedFromMyMagazinesPBDate;
    NSString *_lastVisitedArticleID;
    NTPBDate *_lastVisitedPBDate;
    NSString *_lastVisitedPageID;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIssueID;
@property (retain, nonatomic) NSString *issueID;
@property (nonatomic, readonly) _Bool hasLastVisitedPBDate;
@property (retain, nonatomic) NTPBDate *lastVisitedPBDate;
@property (nonatomic, readonly) _Bool hasLastVisitedArticleID;
@property (retain, nonatomic) NSString *lastVisitedArticleID;
@property (nonatomic, readonly) _Bool hasLastVisitedPageID;
@property (retain, nonatomic) NSString *lastVisitedPageID;
@property (nonatomic, readonly) _Bool hasLastBadgedPBDate;
@property (retain, nonatomic) NTPBDate *lastBadgedPBDate;
@property (nonatomic, readonly) _Bool hasLastEngagedPBDate;
@property (retain, nonatomic) NTPBDate *lastEngagedPBDate;
@property (nonatomic, readonly) _Bool hasLastRemovedFromMyMagazinesPBDate;
@property (retain, nonatomic) NTPBDate *lastRemovedFromMyMagazinesPBDate;

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
