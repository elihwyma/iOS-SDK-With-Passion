/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class SFCardSection, SFPunchout, SFSearchResult;

@interface SFUserReportFeedback

{
    SFSearchResult *_result;
    SFCardSection *_cardSection;
    SFPunchout *_userSelection;
}

@property (retain, nonatomic) SFSearchResult *result;
@property (retain, nonatomic) SFCardSection *cardSection;
@property (retain, nonatomic) SFPunchout *userSelection;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSelection:(id)arg1 result:(id)arg2 cardSection:(id)arg3;

@end
