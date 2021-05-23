/*
 Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface EMFEmojiPreferences : NSObject

{
    NSMutableDictionary *_defaults;
    _Bool _isDefaultDirty;
    NSMutableDictionary *_usageHistory;
    NSMutableArray *_recents;
    NSMutableDictionary *_typingNames;
    NSMutableDictionary *_skinToneBaseKeyPreferences;
    NSMutableDictionary *_categoryIndexes;
    long long _currentSequence;
    NSObject<OS_dispatch_queue> *_differentialPrivacyQueue;
    unsigned long long _maximumRecentsCount;
}

@property (nonatomic) unsigned long long maximumRecentsCount;
@property (nonatomic, readonly) NSArray *allRecents;
@property (nonatomic, readonly) NSArray *recentEmojis;
@property (nonatomic, readonly) NSString *previouslyUsedCategory;
@property (nonatomic, readonly) _Bool hasDisplayedSkinToneHelp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_recentEmojiStrings;
+ (id)defaultsDomain;
+ (id)differentialPrivacyDomain;
+ (id)_recentStringsInCharacterSet:(id)arg1;
+ (id)_cacheDomain;
+ (id)differentialPrivacyRecorderForEmoji:(id)arg1 usageMode:(id)arg2;
+ (id)_allRecentStrings;
+ (id)_cachedFlagCategoryEmoji:(CDUnknownBlockType)arg1;

- (id)init;
- (void)didDisplaySkinToneHelp;
- (void)writeEmojiDefaults;
- (void)readEmojiDefaults;
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2;
- (unsigned long long)previouslyUsedIndexInCategory:(id)arg1;
- (_Bool)hasLastUsedVariantForEmoji:(id)arg1;
- (id)lastUsedVariantEmojiForEmoji:(id)arg1;
- (id)typingNameForEmoji:(id)arg1;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2 typingName:(id)arg3;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2;
- (void)didUseEmoji:(id)arg1;
- (void)resetEmojiDefaults;
- (void)loadDefaultsIfNecessary;
- (id)recentsInCharacterSet:(id)arg1;
- (void)writeEmojiDefaultsAndNotify:(_Bool)arg1;
- (void)_readPreferencesFromDefaults;
- (void)_pruneInvalidEmojiFromHistory;
- (void)_checkForDingbatDuplicates;
- (void)_cleanUpOldFlagsCaches;
- (_Bool)shouldCountEmojiStringForUsageHistory:(id)arg1;
- (double)scoreForSequence:(long long)arg1;
- (double)scoreForEmojiString:(id)arg1;
- (void)migrateFromMajorOSVersion:(long long)arg1;
- (void)migrateInRecentEmoji:(id)arg1 usages:(id)arg2 typingNames:(id)arg3;
- (void)migrateInSkinTonePreferences:(id)arg1;
- (void)migrateInPreviouslyUsedCategory:(id)arg1;
- (void)migrateInPreviouslyUsedCategoryIndexes:(id)arg1;
- (void)migrateInDidDisplaySkinToneHelp:(_Bool)arg1;
- (id)recentVariantEmojiForEmoji:(id)arg1;
- (void)_setRecentStrings:(id)arg1;

@end
