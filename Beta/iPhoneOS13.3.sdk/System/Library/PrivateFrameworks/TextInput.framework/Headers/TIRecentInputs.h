/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TILexicon.h>

@class NSString;

@interface TIRecentInputs : TILexicon

{
    _Bool _needsSync;
    NSString *_filePath;
}

@property (nonatomic) _Bool needsSync;
@property (retain, nonatomic) NSString *filePath;

+ (id)recentInputForIdentifier:(id)arg1;
+ (void)clearRecentInputForIdentifier:(id)arg1;
+ (void)removeInput:(id)arg1 forSystemIdentifier:(id)arg2;
+ (void)requestLexiconForRecentInputIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)requestRemovalOfLexiconForRecentInputIdentifier:(id)arg1;
+ (id)recentInputAtPath:(id)arg1;
+ (id)_lexiconPathForLocalIdentifier:(id)arg1;
+ (void)recentInputForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_sanitizeRecentInputString:(id)arg1;
+ (void)storeInput:(id)arg1 forLocalIdentifier:(id)arg2;
+ (void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2 atPath:(id)arg3;
+ (void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2;
+ (_Bool)identifierIsSystemIdentifier:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)lexiconWithAdditionalEntry:(id)arg1 maximumSize:(long long)arg2;
- (id)lexiconByRemovingEntry:(id)arg1;
- (void)storeIfNecessary;

@end
