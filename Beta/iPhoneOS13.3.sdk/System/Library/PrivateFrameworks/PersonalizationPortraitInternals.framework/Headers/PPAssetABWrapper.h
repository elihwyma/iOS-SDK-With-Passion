/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PPAssetABWrapper : NSObject

{
    _Bool _nonWatchOnly;
    NSString *_abGroupOverride;
}

@property (nonatomic, readonly) _Bool nonWatchOnly;
@property (nonatomic, readonly) NSString *abGroupOverride;

+ (id)dictionaryForCommonAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id *)arg2;
+ (id)dictionaryForNonWatchAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id *)arg2;
+ (id)filesystemPathForNonPlistCommonAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id *)arg2;
+ (id)filesystemPathForNonPlistNonWatchAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id *)arg2;

- (id)dictionaryForAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id *)arg2 naturalABGroupIdentifier:(id *)arg3 abGroupsInAsset:(id *)arg4;
- (id)filesystemPathForNonPlistDataRelativePath:(id)arg1 abGroupIdentifier:(id *)arg2 naturalABGroupIdentifier:(id *)arg3 abGroupsInAsset:(id *)arg4;
- (id)_filesystemPathForRelativePath:(id)arg1;
- (id)_rawDictionaryForAssetDataRelativePath:(id)arg1;
- (id)initCommonAssetWithABGroupOverride:(id)arg1;
- (id)initNonWatchAssetWithABGroupOverride:(id)arg1;
- (id)initWithABGroupOverride:(id)arg1 nonWatchOnly:(_Bool)arg2;

@end
