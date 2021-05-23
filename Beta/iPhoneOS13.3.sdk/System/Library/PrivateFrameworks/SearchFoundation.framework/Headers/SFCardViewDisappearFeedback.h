/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCardViewDisappearFeedback

{
    unsigned long long _cardDisappearEvent;
}

@property (nonatomic) unsigned long long cardDisappearEvent;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned long long)arg1;

@end
