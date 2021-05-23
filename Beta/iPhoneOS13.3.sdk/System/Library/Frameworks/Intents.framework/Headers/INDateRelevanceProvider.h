/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INRelevanceProvider.h>

@class NSDate;

@interface INDateRelevanceProvider : INRelevanceProvider

{
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *endDate;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;

@end
