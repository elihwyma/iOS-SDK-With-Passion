/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class NSArray, NSString;

@interface SFRankingFeedback

{
    double _blendingDuration;
    NSArray *_sections;
    NSString *_l2ModelVersion;
    NSString *_l3ModelVersion;
    NSString *_l2ShadowModelVersion;
}

@property (nonatomic) double blendingDuration;
@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSString *l2ModelVersion;
@property (copy, nonatomic) NSString *l3ModelVersion;
@property (copy, nonatomic) NSString *l2ShadowModelVersion;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSections:(id)arg1 blendingDuration:(double)arg2;

@end
