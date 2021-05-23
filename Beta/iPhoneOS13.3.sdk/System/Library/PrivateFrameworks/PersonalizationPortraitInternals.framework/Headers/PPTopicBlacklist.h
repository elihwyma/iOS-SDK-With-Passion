/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class _PASLock, _PASNotificationToken;

@interface PPTopicBlacklist : NSObject

{
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)_init;
- (void)_loadAssetData;
- (_Bool)shouldBlacklist:(id)arg1;
- (id)indicesOfBlacklistedTopicsInRecordArray:(id)arg1;
- (id)indicesOfBlacklistedTopicsInScoredTopicArray:(id)arg1;

@end
