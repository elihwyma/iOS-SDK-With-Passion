/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class NSArray;

@interface SFVisibleSuggestionsFeedback

{
    NSArray *_suggestions;
}

@property (copy, nonatomic) NSArray *suggestions;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestions:(id)arg1;

@end
