/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface _MapUpdate : NSObject

{
    _Bool _isSectionUpdate;
    _Bool _isInsert;
    _Bool _isDelete;
    _Bool _isMove;
    NSIndexPath *_indexPath;
    NSIndexPath *_moveFromIndexPath;
    NSIndexPath *_moveToIndexPath;
    long long _index;
    long long _section;
    long long _moveFromSection;
    long long _moveToSection;
    struct _NSRange _insertRange;
    struct _NSRange _deleteRange;
    struct _NSRange _moveFromRange;
    struct _NSRange _moveToRange;
}

@property (nonatomic) _Bool isSectionUpdate;
@property (nonatomic) _Bool isInsert;
@property (nonatomic) _Bool isDelete;
@property (nonatomic) _Bool isMove;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) NSIndexPath *moveFromIndexPath;
@property (retain, nonatomic) NSIndexPath *moveToIndexPath;
@property (nonatomic) long long index;
@property (nonatomic) long long section;
@property (nonatomic) struct _NSRange insertRange;
@property (nonatomic) struct _NSRange deleteRange;
@property (nonatomic) long long moveFromSection;
@property (nonatomic) long long moveToSection;
@property (nonatomic) struct _NSRange moveFromRange;
@property (nonatomic) struct _NSRange moveToRange;

+ (id)itemDeleteSection:(long long)arg1 deleteRange:(struct _NSRange)arg2;
+ (id)itemDeleteItemAtIndexPath:(id)arg1 index:(long long)arg2;
+ (id)itemInsertSection:(long long)arg1 insertRange:(struct _NSRange)arg2;
+ (id)itemInsertItemAtIndexPath:(id)arg1 index:(long long)arg2;
+ (id)itemMoveSection:(long long)arg1 toSection:(long long)arg2 fromRange:(struct _NSRange)arg3 toRange:(struct _NSRange)arg4;
+ (id)itemMoveFromIndexIndexPath:(id)arg1 toIndexPath:(id)arg2 fromIndex:(long long)arg3 toIndex:(long long)arg4;

- (id)description;
- (id)reverseUpdateItem;

@end
