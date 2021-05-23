/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, UICollectionViewUpdateItem, UITableViewUpdateGap;

__attribute__((visibility("hidden")))
@interface UIUpdateItem : NSObject

{
    UICollectionViewUpdateItem *_collectionViewUpdateItem;
    _Bool _headerFooterOnly;
    int _action;
    NSIndexPath *_indexPath;
    long long _animation;
    UITableViewUpdateGap *_gap;
}

@property (weak, nonatomic) UITableViewUpdateGap *gap;
@property (nonatomic, readonly) UICollectionViewUpdateItem *collectionViewUpdateItem;
@property (nonatomic, readonly) int action;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic) long long animation;
@property (nonatomic) _Bool headerFooterOnly;
@property (nonatomic, readonly) _Bool isDecomposedFromReload;

- (_Bool)isSectionOperation;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (long long)compareIndexPaths:(id)arg1;
- (id)initWithAction:(int)arg1 forIndexPath:(id)arg2 animation:(long long)arg3;
- (id)_actionDescription;

@end
