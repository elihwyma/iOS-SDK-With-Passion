/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFCardSectionEngagementFeedback.h>

@interface SFMapsCardSectionEngagementFeedback : SFCardSectionEngagementFeedback

{
    int _feedbackType;
}

@property (nonatomic) int feedbackType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedbackType:(int)arg1;

@end
