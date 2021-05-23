/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFCardSectionFeedback.h>

@class SFPunchout;

@interface SFCardSectionEngagementFeedback : SFCardSectionFeedback

{
    SFPunchout *_destination;
    unsigned long long _triggerEvent;
    unsigned long long _actionCardType;
    unsigned long long _actionTarget;
}

@property (retain, nonatomic) SFPunchout *destination;
@property (nonatomic) unsigned long long triggerEvent;
@property (nonatomic) unsigned long long actionCardType;
@property (nonatomic) unsigned long long actionTarget;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCardSection:(id)arg1 destination:(id)arg2 triggerEvent:(unsigned long long)arg3 actionCardType:(unsigned long long)arg4;

@end
