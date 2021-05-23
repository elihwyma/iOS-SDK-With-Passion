/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKChangeSet, IKDOMBindingController, IKJSDataSourceView, NSArray, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface IKDOMBindingStrategy : NSObject

{
    IKDOMBindingController *_domBindingController;
    NSString *_itemsBindingKey;
    IKChangeSet *_sourceItemsChangeSet;
    NSMutableSet *_updatedItemIDs;
    IKChangeSet *_filteredChangeSet;
    IKJSDataSourceView *_dataSourceView;
}

@property (retain, nonatomic) IKChangeSet *sourceItemsChangeSet;
@property (retain, nonatomic) NSMutableSet *updatedItemIDs;
@property (retain, nonatomic) IKChangeSet *filteredChangeSet;
@property (retain, nonatomic) IKJSDataSourceView *dataSourceView;
@property (weak, nonatomic, readonly) IKDOMBindingController *domBindingController;
@property (copy, nonatomic, readonly) NSString *itemsBindingKey;
@property (weak, nonatomic, readonly) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDOMBindingController:(id)arg1 itemsBindingKey:(id)arg2;
- (void)didResolveKeys:(id)arg1;
- (struct _NSRange)visibleItemsRange;
- (id)keysAffectingChildren;
- (id)prototypeDependentKeys;
- (void)valueDidChangeForKey:(id)arg1 propertyPath:(id)arg2 extraInfo:(id)arg3;
- (_Bool)applyValue:(id)arg1 forKey:(id)arg2;
- (void)_applyItemsValueWithDataSource:(id)arg1;
- (id)_adjustedIndexTitlesFromDataSource:(id)arg1 filteredItems:(id)arg2 filteredChangeSet:(id)arg3;

@end
