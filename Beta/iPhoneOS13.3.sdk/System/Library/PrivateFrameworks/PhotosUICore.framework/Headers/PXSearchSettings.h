/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXSearchSettings : PXSettings

{
    _Bool _alwaysTrySiriSearch;
    _Bool _enableImplicitTokenization;
    _Bool _implicitTokenizationUsePrefixMatch;
    _Bool _implicitTokenizationLastTokenUsesPrefixMatch;
    _Bool _preventUnnecessaryImplicitTokenization;
    _Bool _exactMatchIgnoreUntokenizedCharacters;
    _Bool _lastImplicitTokenAllowsWordEmbeddings;
    unsigned long long _maxNumberOfSuggestionsToShow;
    unsigned long long _maxNumberOfTopAssetColumns;
    unsigned long long _maxNumberOfResultColumns;
    unsigned long long _maxNumberOfTopAssetRows;
    unsigned long long _standardNumberOfTopAssetRows;
}

@property (nonatomic) _Bool alwaysTrySiriSearch;
@property (nonatomic) _Bool enableImplicitTokenization;
@property (nonatomic) _Bool implicitTokenizationUsePrefixMatch;
@property (nonatomic) _Bool implicitTokenizationLastTokenUsesPrefixMatch;
@property (nonatomic) _Bool preventUnnecessaryImplicitTokenization;
@property (nonatomic) _Bool exactMatchIgnoreUntokenizedCharacters;
@property (nonatomic) _Bool lastImplicitTokenAllowsWordEmbeddings;
@property (nonatomic) unsigned long long maxNumberOfSuggestionsToShow;
@property (nonatomic) unsigned long long maxNumberOfTopAssetColumns;
@property (nonatomic) unsigned long long maxNumberOfResultColumns;
@property (nonatomic) unsigned long long maxNumberOfTopAssetRows;
@property (nonatomic) unsigned long long standardNumberOfTopAssetRows;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
