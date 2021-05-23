/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class _PASLock, _PASNotificationToken;

@interface PPTopicWhitelist : NSObject

{
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)sharedInstance;
+ (id)_keyFor:(id)arg1 of:(id)arg2;

- (void)dealloc;
- (id)_init;
- (void)_loadAssetData;
- (_Bool)shouldBypassWhitelist:(id)arg1;
- (id)indexesOfTopicsInRecordArray:(id)arg1 inWhitelistOf:(id)arg2;
- (id)indexesOfTopicsInScoredTopicArray:(id)arg1 inWhitelistOf:(id)arg2;
- (id)filterTopicDictionary:(id)arg1 withWhitelistOf:(id)arg2;

@end
