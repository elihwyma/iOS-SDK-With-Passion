/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCInterestToken, NSString, NTPBChannelMembershipRecord;

@interface FCChannelMembership : NSObject

{
    NTPBChannelMembershipRecord *_record;
    FCInterestToken *_interestToken;
}

@property (retain, nonatomic) NTPBChannelMembershipRecord *record;
@property (retain, nonatomic) FCInterestToken *interestToken;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) _Bool isAllowedToSeeDrafts;
@property (nonatomic, readonly) NSString *draftArticleListID;
@property (nonatomic, readonly) NSString *draftIssueListID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2;

@end
