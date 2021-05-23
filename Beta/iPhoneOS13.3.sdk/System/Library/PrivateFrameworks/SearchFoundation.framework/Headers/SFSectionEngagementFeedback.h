/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class SFResultSection;

@interface SFSectionEngagementFeedback

{
    SFResultSection *_section;
    unsigned long long _triggerEvent;
}

@property (copy, nonatomic) SFResultSection *section;
@property (nonatomic) unsigned long long triggerEvent;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSection:(id)arg1 triggerEvent:(unsigned long long)arg2;

@end
