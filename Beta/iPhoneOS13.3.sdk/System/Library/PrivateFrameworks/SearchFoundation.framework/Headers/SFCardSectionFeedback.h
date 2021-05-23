/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class NSString;

@protocol SFCardSection;

@interface SFCardSectionFeedback

{
    id <SFCardSection> _cardSection;
    NSString *_cardSectionId;
    NSString *_resultId;
}

@property (retain, nonatomic) id <SFCardSection> cardSection;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultId;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCardSection:(id)arg1;

@end
