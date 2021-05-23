/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPQueryCollection.h>

@class NSFileProviderSearchQuery, NSPredicate;

@interface FPSearchCollection : FPQueryCollection

{
    NSPredicate *_filterPredicate;
}

@property (copy, nonatomic) NSFileProviderSearchQuery *searchQuery;

- (id)init;
- (_Bool)isCollectionValidForItem:(id)arg1;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (id)scopedSearchQuery;
- (id)_enumerationSettingsPredicate;
- (id)_createDescriptorWithSortDescriptors:(id)arg1;

@end
