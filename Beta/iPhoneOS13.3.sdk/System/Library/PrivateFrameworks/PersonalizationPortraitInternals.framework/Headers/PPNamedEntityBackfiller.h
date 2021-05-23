/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PPNamedEntityStore, PPTopicStore;

@interface PPNamedEntityBackfiller : NSObject

{
    PPNamedEntityStore *_namedEntityStore;
    PPTopicStore *_topicStore;
}

+ (id)sharedInstance;

- (id)initWithNamedEntityStore:(id)arg1 topicStore:(id)arg2;
- (_Bool)backfillEntityMappingAndDonation;

@end
