/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class _PASLock;

@interface PPNamedEntityBlacklist : NSObject

{
    _PASLock *_lock;
    unsigned long long _maxRegexMatchingTicks;
}

+ (id)sharedInstance;

- (id)init_;
- (void)_loadAssetData;
- (id)blacklistedSetFromEntities:(id)arg1;

@end
