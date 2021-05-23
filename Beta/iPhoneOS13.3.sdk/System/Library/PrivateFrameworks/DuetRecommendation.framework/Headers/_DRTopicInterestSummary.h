/*
 Image: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
 */

#import <Foundation/NSObject.h>

@interface _DRTopicInterestSummary : NSObject

{
    unsigned long long _topicSelectionsCount;
    unsigned long long _topicPresentationsCount;
}

@property unsigned long long topicPresentationsCount;
@property unsigned long long topicSelectionsCount;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPresentationsCount:(unsigned long long)arg1 selectionsCount:(unsigned long long)arg2;

@end
