/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFClearInputFeedback

{
    unsigned long long _triggerEvent;
}

@property (nonatomic) unsigned long long triggerEvent;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned long long)arg1;

@end
