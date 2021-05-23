/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCache, NSDictionary, NSIndexSet, NSMutableDictionary, UIBarButtonItem;

@protocol PUBarButtonItemCollectionDataSource;

__attribute__((visibility("hidden")))
@interface PUBarButtonItemCollection : NSObject

{
    NSArray *_identifiersOrder;
    NSIndexSet *_centeredItemIdentifiers;
    id <PUBarButtonItemCollectionDataSource> _dataSource;
    unsigned long long __options;
    NSCache *__configurationsCache;
    NSMutableDictionary *__barButtonItems;
    NSIndexSet *__previousRequestedSet;
    NSArray *__previousResult;
    UIBarButtonItem *__flexibleSpaceBarButtonItem;
    UIBarButtonItem *__placeholderBarButtonItem;
}

@property (nonatomic, readonly) unsigned long long _options;
@property (nonatomic, readonly) NSCache *_configurationsCache;
@property (nonatomic, readonly) NSMutableDictionary *_barButtonItems;
@property (copy, nonatomic, setter=_setPreviousRequestedSet:) NSIndexSet *_previousRequestedSet;
@property (retain, nonatomic, setter=_setPreviousResult:) NSArray *_previousResult;
@property (nonatomic, readonly) UIBarButtonItem *_flexibleSpaceBarButtonItem;
@property (nonatomic, readonly) UIBarButtonItem *_placeholderBarButtonItem;
@property (retain, nonatomic) NSArray *identifiersOrder;
@property (retain, nonatomic) NSIndexSet *centeredItemIdentifiers;
@property (weak, nonatomic) id <PUBarButtonItemCollectionDataSource> dataSource;
@property (nonatomic, readonly) NSDictionary *barButtonItems;

- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)barButtonItemForIdentifier:(long long)arg1;
- (void)_resetSet;
- (long long)identifierForBarButtonItem:(id)arg1;
- (long long)identifierForCustomButton:(id)arg1;
- (id)orderedBarButtonsItemsForIdentifiers:(id)arg1;
- (id)_newEntryForIdentifiers:(id)arg1;
- (id)_arrangedBarButtonItems:(id)arg1 identifiers:(id)arg2;
- (void)_centersButtonsIfNeeded:(id)arg1 identifiers:(id)arg2;

@end
