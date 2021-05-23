/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface EffectDataSource : NSObject

{
    _Bool _generatingThumbs;
    _Bool _generatingThumbsInterrupted;
    int _filterClientRefCount;
    NSMutableArray *_factoryFilterIDsArray;
    NSMutableDictionary *_factoryFilterNamesDict;
    NSMutableDictionary *_factoryFilterInternalNamesDict;
    NSMutableArray *_allFilterIDsArray;
    NSMutableDictionary *_allFilterNamesDict;
    NSMutableDictionary *_allFilterPreviewsDict;
    NSMutableDictionary *_allFilterDirtyPreviewsDict;
    NSMutableArray *_factoryTitleIDsArray;
    NSMutableDictionary *_factoryTitleNamesDict;
    NSMutableDictionary *_factoryTitleInternalNamesDict;
    NSMutableArray *_allTitleIDsArray;
    NSMutableDictionary *_allTitleNamesDict;
    NSMutableDictionary *_allTitlePreviewsDict;
    NSMutableDictionary *_allTitleDirtyPreviewsDict;
    NSMutableArray *_factoryGeneratorIDsArray;
    NSMutableDictionary *_factoryGeneratorNamesDict;
    NSMutableArray *_allGeneratorIDsArray;
    NSMutableDictionary *_allGeneratorNamesDict;
    NSMutableDictionary *_allGeneratorPreviewsDict;
    NSMutableDictionary *_allGeneratorDirtyPreviewsDict;
    NSMutableArray *_factoryTransitionIDsArray;
    NSMutableDictionary *_factoryTransitionNamesDict;
    NSMutableArray *_allTransitionIDsArray;
    NSMutableDictionary *_allTransitionNamesDict;
    NSMutableDictionary *_allTransitionPreviewsDict;
    NSMutableDictionary *_allTransitionDirtyPreviewsDict;
}

@property (retain, nonatomic) NSMutableArray *factoryFilterIDsArray;
@property (retain, nonatomic) NSMutableDictionary *factoryFilterNamesDict;
@property (retain, nonatomic) NSMutableDictionary *factoryFilterInternalNamesDict;
@property (retain, nonatomic) NSMutableArray *allFilterIDsArray;
@property (retain, nonatomic) NSMutableDictionary *allFilterNamesDict;
@property (retain, nonatomic) NSMutableDictionary *allFilterPreviewsDict;
@property (retain, nonatomic) NSMutableDictionary *allFilterDirtyPreviewsDict;
@property int filterClientRefCount;
@property (retain, nonatomic) NSMutableArray *factoryTitleIDsArray;
@property (retain, nonatomic) NSMutableDictionary *factoryTitleNamesDict;
@property (retain, nonatomic) NSMutableDictionary *factoryTitleInternalNamesDict;
@property (retain, nonatomic) NSMutableArray *allTitleIDsArray;
@property (retain, nonatomic) NSMutableDictionary *allTitleNamesDict;
@property (retain, nonatomic) NSMutableDictionary *allTitlePreviewsDict;
@property (retain, nonatomic) NSMutableDictionary *allTitleDirtyPreviewsDict;
@property (retain, nonatomic) NSMutableArray *factoryGeneratorIDsArray;
@property (retain, nonatomic) NSMutableDictionary *factoryGeneratorNamesDict;
@property (retain, nonatomic) NSMutableArray *allGeneratorIDsArray;
@property (retain, nonatomic) NSMutableDictionary *allGeneratorNamesDict;
@property (retain, nonatomic) NSMutableDictionary *allGeneratorPreviewsDict;
@property (retain, nonatomic) NSMutableDictionary *allGeneratorDirtyPreviewsDict;
@property (retain, nonatomic) NSMutableArray *factoryTransitionIDsArray;
@property (retain, nonatomic) NSMutableDictionary *factoryTransitionNamesDict;
@property (retain, nonatomic) NSMutableArray *allTransitionIDsArray;
@property (retain, nonatomic) NSMutableDictionary *allTransitionNamesDict;
@property (retain, nonatomic) NSMutableDictionary *allTransitionPreviewsDict;
@property (retain, nonatomic) NSMutableDictionary *allTransitionDirtyPreviewsDict;
@property (nonatomic, getter=isGeneratingThumbs) _Bool generatingThumbs;
@property (nonatomic, getter=isGeneratingThumbsInterrupted) _Bool generatingThumbsInterrupted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedDataSource;

- (id)init;
- (long long)numberOfItems;
- (id)effectsForType:(id)arg1;
- (id)getFactoryFilterIDs;
- (id)getAllFilterNames;
- (id)getFactoryFilterNames;
- (id)getAllFilterIDs;
- (id)getAllTitleIDs;
- (id)getAllTransitionIDs;
- (id)getAllGeneratorIDs;
- (void)initAllEffectPreviewsForImage:(id)arg1 effectType:(id)arg2;
- (void)dirtyAllFilterPreviewsIncludingNone:(_Bool)arg1;
- (void)dirtyAllTitlePreviewsIncludingNone:(_Bool)arg1;
- (void)generatePreviewImageForEffectID:(id)arg1 currentTime:(CDStruct_1b6d18a9)arg2 effectRange:(CDStruct_e83c9415)arg3 rawImage:(id)arg4 previewSize:(struct CGSize)arg5 completion:(CDUnknownBlockType)arg6;
- (id)getFactoryTitleIDs;
- (id)getAllTitleNames;
- (id)getFactoryTitleNames;
- (id)getFactoryTransitionIDs;
- (id)getAllTransitionNames;
- (id)getFactoryTransitionNames;
- (id)getAllGeneratorNames;
- (id)getEffectIDsForType:(id)arg1;
- (id)getEffectNamesForType:(id)arg1;
- (id)itemIDAtIndexPath:(id)arg1;
- (id)itemNameAtIndexPath:(id)arg1;
- (id)indexPathOfItemName:(id)arg1;
- (id)indexPathOfItemID:(id)arg1;
- (id)getFactoryFilterInternalNames;
- (void)initAllFilterPreviewsForImage:(id)arg1;
- (void)releaseAllFilterPreviewsIncludingNone:(_Bool)arg1;
- (void)initAllTitlePreviewsForImage:(id)arg1;
- (void)releaseAllTitlePreviewsIncludingNone:(_Bool)arg1;
- (void)generateAllFilterPreviewsAtTime:(CDStruct_1b6d18a9)arg1 effectRange:(CDStruct_e83c9415)arg2 rawImage:(id)arg3 previewSize:(struct CGSize)arg4;
- (id)getPreviewImageForFilterID:(id)arg1;
- (id)getPreviewImageForTitleID:(id)arg1;
- (id)getFactoryTitleInternalNames;
- (id)getFactoryTransitionInternalNames;

@end
