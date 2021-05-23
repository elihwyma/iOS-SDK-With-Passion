/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKDOMBindingStrategy.h>

@class IKChangeSet, NSDictionary, NSIndexSet;

__attribute__((visibility("hidden")))
@interface IKDOMItemsBindingStrategy : IKDOMBindingStrategy

{
    NSIndexSet *_autoHighlightedIndexes;
    NSDictionary *_usedAppPrototypesByIdentifier;
    IKChangeSet *_itemsChangeSet;
}

@property (copy, nonatomic) NSIndexSet *autoHighlightedIndexes;
@property (retain, nonatomic) NSDictionary *usedAppPrototypesByIdentifier;
@property (retain, nonatomic) IKChangeSet *itemsChangeSet;

- (void)didResolveKeys:(id)arg1;
- (void)_updateChildDOMElements;
- (id)_appDataItemFromDataItem:(id)arg1 binding:(id)arg2 prototypeIdentifier:(id)arg3 autoHighlighted:(_Bool *)arg4;
- (void)_reevaluateVisibleIndexRange;
- (id)initWithDOMBindingController:(id)arg1;
- (struct _NSRange)visibleItemsRange;
- (void)willUpdateWithItems:(id)arg1 indexTitles:(id)arg2 usedPrototypesByIdentifier:(id)arg3 changeSet:(id)arg4;

@end
