/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PPScoredItem;

@interface PPCoalescedScoredTopic : NSObject

{
    unsigned short _occurrencesInSource;
    struct PPScoredItem *_scoredTopic;
}

@property (nonatomic, readonly) PPScoredItem *scoredTopic;
@property (nonatomic, readonly) unsigned short occurrencesInSource;

- (id)init;
- (id)initWithScoredTopic:(struct PPScoredItem *)arg1 occurrencesInSource:(unsigned short)arg2;

@end
