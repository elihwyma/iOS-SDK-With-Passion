/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PPScoredItem;

@interface PPCoalescedScoredNamedEntity : NSObject

{
    unsigned short _occurrencesInSource;
    struct PPScoredItem *_scoredNamedEntity;
}

@property (nonatomic, readonly) PPScoredItem *scoredNamedEntity;
@property (nonatomic, readonly) unsigned short occurrencesInSource;

- (id)init;
- (id)initWithScoredNamedEntity:(struct PPScoredItem *)arg1 occurrencesInSource:(unsigned short)arg2;

@end
