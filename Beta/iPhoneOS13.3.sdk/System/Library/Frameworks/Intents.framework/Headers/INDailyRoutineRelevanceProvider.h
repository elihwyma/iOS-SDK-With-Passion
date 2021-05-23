/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INRelevanceProvider.h>

@interface INDailyRoutineRelevanceProvider : INRelevanceProvider

{
    long long _situation;
}

@property (nonatomic, readonly) long long situation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSituation:(long long)arg1;

@end
