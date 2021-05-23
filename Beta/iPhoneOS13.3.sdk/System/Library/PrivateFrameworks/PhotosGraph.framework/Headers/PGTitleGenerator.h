/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSLocale, NSSet, PGTitle, PGTitleGeneratorDateMatching, PHAsset, PHAssetCollection;

@interface PGTitleGenerator : NSObject

{
    _Bool _isForHighlight;
    NSSet *_momentNodes;
    PGTitleGeneratorDateMatching *_dateMatching;
    PHAsset *_keyAsset;
    PHAssetCollection *_curatedAssetCollection;
    PHAssetCollection *_assetCollection;
    PGTitle *_title;
    PGTitle *_subtitle;
    NSSet *_usedLocationNodes;
    NSLocale *_locale;
    unsigned long long _preferredTitleType;
    unsigned long long _lineBreakBehavior;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) NSSet *momentNodes;
@property (retain, nonatomic) NSSet *usedLocationNodes;
@property (nonatomic, readonly) PGTitleGeneratorDateMatching *dateMatching;
@property (nonatomic, readonly) PHAsset *keyAsset;
@property (nonatomic, readonly) PHAssetCollection *curatedAssetCollection;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic, readonly) PGTitle *title;
@property (nonatomic, readonly) PGTitle *subtitle;
@property (nonatomic) unsigned long long preferredTitleType;
@property (nonatomic) unsigned long long lineBreakBehavior;
@property (nonatomic) _Bool isForHighlight;

- (id)_defaultTitle;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (_Bool)_useSplitTimeTitlesIfNeeded;
- (id)initWithMomentNodes:(id)arg1 type:(long long)arg2;
- (_Bool)_triggerDefaultTitleGenerationIfNil;
- (id)initWithMomentNode:(id)arg1 referenceDateInterval:(id)arg2 keyAsset:(id)arg3 curatedAssetCollection:(id)arg4 assetCollection:(id)arg5 type:(long long)arg6;
- (id)initWithMomentNodes:(id)arg1 referenceDateInterval:(id)arg2 keyAsset:(id)arg3 curatedAssetCollection:(id)arg4 assetCollection:(id)arg5 type:(long long)arg6;
- (id)initWithMomentNode:(id)arg1 type:(long long)arg2;
- (void)_generateTitleAndSubtitle;
- (id)_defaultLocationTitle;
- (id)_defaultTimeTitle;
- (id)_splitTimeTitles;
- (unsigned long long)_allowedTimeTitleFormats;
- (id)_addressNodeFromKeyAsset;
- (id)_addressNodesFromCuratedAssetCollection;

@end
