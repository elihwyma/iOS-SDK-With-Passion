/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class NSArray;

@interface SFVisibleResultsFeedback

{
    NSArray *_results;
    unsigned long long _triggerEvent;
}

@property (copy, nonatomic) NSArray *results;
@property (nonatomic) unsigned long long triggerEvent;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1 triggerEvent:(unsigned long long)arg2;

@end
