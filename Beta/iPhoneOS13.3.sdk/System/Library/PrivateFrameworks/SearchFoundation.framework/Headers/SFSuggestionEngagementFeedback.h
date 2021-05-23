/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class SFSearchSuggestion;

@interface SFSuggestionEngagementFeedback

{
    SFSearchSuggestion *_suggestion;
}

@property (retain, nonatomic) SFSearchSuggestion *suggestion;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestion:(id)arg1;

@end
