/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaLibraryEntityTranslationContext, MPMediaLibraryView, MPPropertySet, MPSectionedCollection, NSDictionary, NSMapTable, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface MPStoreLibraryPersonalizationCollectionDataSource : NSObject

{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    struct vector<std::__1::shared_ptr<mlcore::EntityCache>, std::__1::allocator<std::__1::shared_ptr<mlcore::EntityCache>>> _entityCaches;
    MPSectionedCollection *_unpersonalizedContentDescriptors;
    MPPropertySet *_itemProperties;
    MPPropertySet *_sectionProperties;
    NSDictionary *_itemIndexPathToOverridePropertySet;
    MPMediaLibraryView *_libraryView;
    MPMediaLibraryEntityTranslationContext *_translatingContext;
    NSMapTable *_relativeModelClassToMappingResponse;
    NSMutableDictionary *_sectionToLibraryAddedOverride;
}

@property (retain, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (copy, nonatomic) MPPropertySet *itemProperties;
@property (copy, nonatomic) MPPropertySet *sectionProperties;
@property (copy, nonatomic) NSDictionary *itemIndexPathToOverridePropertySet;
@property (copy, nonatomic) MPMediaLibraryView *libraryView;
@property (retain, nonatomic) MPMediaLibraryEntityTranslationContext *translatingContext;
@property (copy, nonatomic) NSMapTable *relativeModelClassToMappingResponse;
@property (copy, nonatomic) NSMutableDictionary *sectionToLibraryAddedOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_completePersonalizedObjectWithLibraryObject:(id)arg1 personalizationProperties:(id)arg2 overrideLibraryAddedStatus:(long long)arg3;
+ (id)_lightweightPersonalizedObjectWithUnpersonalizedObject:(id)arg1 libraryObject:(id)arg2 personalizationProperties:(id)arg3 overrideLibraryAddedStatus:(long long)arg4;
+ (id)_requiredLightweightPersonalizationPropertiesForModelClass:(Class)arg1 requestedProperties:(id)arg2;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)arg1 libraryPlaybackPosition:(id)arg2 personalizationProperties:(id)arg3;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)arg1 identifiers:(id)arg2 personalizationProperties:(id)arg3;
+ (id)_lightweightPersonalizedStoreAssetWithUnpersonalizedAsset:(id)arg1 libraryAsset:(id)arg2 personalizationProperties:(id)arg3;

- (id)init;
- (id).cxx_construct;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)_libraryObjectWithRelativeModelClass:(Class)arg1 identifierSet:(id)arg2 propertySet:(id)arg3;
- (shared_ptr_1c86f238)_entityCacheForEntityClass:(struct EntityClass *)arg1 propertiesToFetch:(vector_90d4f7ff)arg2;

@end
