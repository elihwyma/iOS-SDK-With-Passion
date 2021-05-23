/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@protocol SKUIEntityProviding;

@interface SKUIDynamicPageSectionIndexMapper : NSObject

{
    struct _NSRange *_sectionIndexToEntityRange;
    long long _numberOfSections;
    struct {
        unsigned int respondsToNumberOfSections:1;
    } _entityProviderFlags;
    id <SKUIEntityProviding> _entityProvider;
}

@property (retain, nonatomic) id <SKUIEntityProviding> entityProvider;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) long long totalNumberOfEntities;

- (void)dealloc;
- (void)reloadData;
- (id)entityIndexPathForGlobalIndex:(long long)arg1;
- (void)_loadDataIfNeeded;
- (_Bool)getItem:(unsigned long long *)arg1 section:(unsigned long long *)arg2 forGlobalIndex:(long long)arg3;
- (long long)globalIndexForEntityIndexPath:(id)arg1;
- (struct _NSRange)rangeForSectionAtIndex:(long long)arg1;

@end
