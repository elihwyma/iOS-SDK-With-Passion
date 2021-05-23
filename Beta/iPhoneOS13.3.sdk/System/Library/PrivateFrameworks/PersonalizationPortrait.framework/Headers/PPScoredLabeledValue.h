/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class PPLabeledValue;

@interface PPScoredLabeledValue : NSObject

{
    unsigned char _flags;
    PPLabeledValue *_labeledValue;
    double _score;
}

@property (nonatomic, readonly) PPLabeledValue *labeledValue;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) unsigned char flags;

+ (_Bool)supportsSecureCoding;
+ (id)scoredLabeledValueWithLabeledValue:(id)arg1 score:(double)arg2 flags:(unsigned char)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabeledValue:(id)arg1 score:(double)arg2 flags:(unsigned char)arg3;
- (long long)reverseCompare:(id)arg1;
- (_Bool)isEqualToScoredLabeledValue:(id)arg1;

@end
