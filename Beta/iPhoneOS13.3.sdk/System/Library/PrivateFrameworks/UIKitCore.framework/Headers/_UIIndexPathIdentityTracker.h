/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UICollectionView, UITableView;

__attribute__((visibility("hidden")))
@interface _UIIndexPathIdentityTracker : NSObject

{
    UITableView *_tableView;
    UICollectionView *_collectionView;
    id _identityBasedDataSource;
    NSMutableDictionary *_mapping;
    _Bool _enforcesManualMapping;
}

- (id)init;
- (void)reset;
- (id)initWithCollectionView:(id)arg1;
- (id)initWithTableView:(id)arg1;
- (void)updateWithUpdateItems:(id)arg1;
- (id)identifierForIndexPath:(id)arg1;
- (id)currentIndexPathForIdentifier:(id)arg1;
- (id)_mappingIdentifierForSanitizedIndexPath:(id)arg1;
- (void)enforceManualMapping;

@end
