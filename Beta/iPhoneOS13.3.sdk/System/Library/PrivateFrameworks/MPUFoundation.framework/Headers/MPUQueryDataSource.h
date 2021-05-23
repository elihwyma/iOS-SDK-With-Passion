/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <MPUFoundation/MPUDataSource.h>

@class MPMediaItemCollection, MPMediaQuery, MPMediaQuerySectionInfo, NSArray, NSMutableSet;

@interface MPUQueryDataSource : MPUDataSource

{
    NSArray *_entities;
    NSMutableSet *_additionalUniqueItemPropertiesToFetch;
    _Bool _hasValidEmpty;
    _Bool _hasValidRepresentativeCollection;
    _Bool _invalidateWhenEnteringForeground;
    _Bool _isEmpty;
    MPMediaItemCollection *_representativeCollection;
    MPMediaQuerySectionInfo *_sectionInfo;
    _Bool _ignoringInvalidationDueToBackgroundApplicationState;
    MPMediaQuery *_query;
}

@property (nonatomic, readonly) MPMediaQuery *query;
@property (nonatomic) _Bool ignoringInvalidationDueToBackgroundApplicationState;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)count;
- (_Bool)isEmpty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)entities;
- (unsigned long long)numberOfSections;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (id)_representativeCollection;
- (id)localizedSectionIndexTitles;
- (id)_sectionInfo;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (id)initWithEntityType:(long long)arg1;
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_invalidateCalculatedEntities;
- (id)queryForEntityAtIndex:(unsigned long long)arg1;
- (void)_invalidateIfNeeded;
- (void)_invalidateForDisplayValuesChangeIfNeeded;
- (_Bool)canEditEntityAtIndex:(unsigned long long)arg1;
- (_Bool)canSelectEntityAtIndex:(unsigned long long)arg1;
- (void)deleteEntityAtIndex:(unsigned long long)arg1;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;
- (id)queryForEntityAtIndexPath:(id)arg1;
- (_Bool)showsIndexBar;
- (id)localizedSectionTitleAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1;
- (_Bool)showsEntityCountFooter;
- (void)addAdditionalMediaEntityPropertiesToFetch:(id)arg1;
- (void)removeAdditionalMediaEntityPropertiesToFetch:(id)arg1;
- (void)_isCloudEnabledDidChangeNotification:(id)arg1;
- (_Bool)_deleteHidesFromCloudForIndex:(unsigned long long)arg1 hidesAll:(out _Bool *)arg2;

@end
