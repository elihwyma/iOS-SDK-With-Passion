/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSIndexPath, NSUUID;

@interface UICollectionViewUpdateItem : NSObject <Swift>

{
    NSIndexPath *_initialIndexPath;
    NSIndexPath *_finalIndexPath;
    long long _updateAction;
    _Bool _isAppendingSectionInsert;
    NSUUID *_identifier;
}

@property (nonatomic, readonly, getter=_action) long long action;
@property (nonatomic, readonly, getter=_indexPath) NSIndexPath *indexPath;
@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) _Bool isAppendingSectionInsert;
@property (nonatomic, readonly, getter=_isSectionOperation) _Bool isSectionOperation;
@property (retain, nonatomic, getter=_newIndexPath, setter=_setNewIndexPath:) NSIndexPath *newIndexPath;
@property (nonatomic, readonly) NSIndexPath *indexPathBeforeUpdate;
@property (nonatomic, readonly) NSIndexPath *indexPathAfterUpdate;
@property (nonatomic, readonly) long long updateAction;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3;
- (id)initWithAction:(long long)arg1 forIndexPath:(id)arg2;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (long long)compareIndexPaths:(id)arg1;
- (_Bool)isNOOP;
- (id)revertedUpdate;
- (_Bool)isEqualToUpdate:(id)arg1;
- (id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2;
- (_Bool)isRevertedUpdateOf:(id)arg1;

@end
