/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@class FPExtensionEnumerationSettings, FPItemID;

@interface FPExtensionCollection

{
    FPExtensionEnumerationSettings *_settings;
    FPItemID *_alternateID;
}

@property (copy) FPExtensionEnumerationSettings *settings;
@property (readonly) FPItemID *enumeratedItemID;

+ (_Bool)item:(id)arg1 isValidForObservedItemID:(id)arg2;
+ (_Bool)_item:(id)arg1 isCollectionRootForObservedItemID:(id)arg2;

- (id)description;
- (id)initWithSettings:(id)arg1;
- (_Bool)isRootItem:(id)arg1;
- (void)updateRootItem:(id)arg1;
- (_Bool)isCollectionValidForItem:(id)arg1;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (id)scopedSearchQuery;

@end
