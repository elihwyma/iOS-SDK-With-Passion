/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFSearchViewDisappearFeedback

{
    long long _viewDisappearEvent;
}

@property (nonatomic) long long viewDisappearEvent;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(long long)arg1;

@end
