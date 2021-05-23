/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class NSArray, SFResultSection;

@interface SFSectionRankingFeedback

{
    NSArray *_results;
    SFResultSection *_section;
    unsigned long long _localSectionPosition;
    double _personalizationScore;
}

@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) SFResultSection *section;
@property (nonatomic) unsigned long long localSectionPosition;
@property (nonatomic) double personalizationScore;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1 section:(id)arg2 localSectionPosition:(unsigned long long)arg3 personalizationScore:(double)arg4;

@end
