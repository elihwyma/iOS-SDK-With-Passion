/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@class FPQueryEnumerationSettings, NSArray, NSNumber, NSPredicate, NSString;

@interface FPQueryCollection

{
    FPQueryEnumerationSettings *_settings;
    Class _descriptorClass;
    NSPredicate *_predicate;
    unsigned long long _itemsOrigin;
    NSString *_descriptionName;
}

@property (readonly) FPQueryEnumerationSettings *settings;
@property (readonly) NSPredicate *predicate;
@property (nonatomic, readonly) unsigned long long itemsOrigin;
@property (copy) NSNumber *desiredNumberOfItems;
@property (copy) NSArray *allowedProviderIdentifiers;
@property (copy) NSArray *excludedFileTypes;
@property (copy) NSArray *allowedFileTypes;
@property (copy) NSString *tagIdentifier;
@property (copy) NSString *descriptionName;

+ (void)enableMountPointQueries;
+ (void)disableMountPointQueries;
+ (void)suspendAllQueries;
+ (void)resumeAllQueries;

- (id)description;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (id)scopedSearchQuery;
- (id)initWithQueryDescriptorClass:(Class)arg1 predicate:(id)arg2 paced:(_Bool)arg3;
- (id)_enumerationSettingsPredicate;
- (id)_createDescriptorWithSortDescriptors:(id)arg1;
- (void)dataSource:(id)arg1 didChangeItemsOrigin:(unsigned long long)arg2;
- (id)initWithQueryDescriptorClass:(Class)arg1;
- (id)initWithQueryDescriptorClass:(Class)arg1 predicate:(id)arg2;
- (id)underlyingQueryStringForMountPoint:(id)arg1;

@end
