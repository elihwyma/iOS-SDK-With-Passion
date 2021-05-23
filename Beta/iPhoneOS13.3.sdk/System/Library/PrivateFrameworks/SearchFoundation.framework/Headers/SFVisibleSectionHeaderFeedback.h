/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class SFResultSection;

@interface SFVisibleSectionHeaderFeedback

{
    SFResultSection *_section;
    unsigned long long _headerType;
}

@property (copy, nonatomic) SFResultSection *section;
@property (nonatomic) unsigned long long headerType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSection:(id)arg1 headerType:(unsigned long long)arg2;

@end
