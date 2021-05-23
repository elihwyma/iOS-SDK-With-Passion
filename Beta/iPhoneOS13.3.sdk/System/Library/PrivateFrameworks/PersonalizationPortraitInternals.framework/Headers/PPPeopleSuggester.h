/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class _PASLock;

@interface PPPeopleSuggester : NSObject

{
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (id)rankedContactIdentifiers;
- (id)rankedContactIdentifiersMatchingName:(id)arg1;
- (double)_cacheEntryAgeThresholdSecondsSince1970;
- (id)_rankedContactIdentifiersMatchingName:(id)arg1;
- (void)_sweepCache;

@end
