/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <PersonalizationPortrait/PPNamedEntity.h>

@class PPNamedEntityRecord;

@interface PPNamedEntityWithRecord : PPNamedEntity

{
    PPNamedEntityRecord *_mostRelevantRecord;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)sentimentScore;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3 mostRelevantRecord:(id)arg4;
- (id)mostRelevantRecord;

@end
