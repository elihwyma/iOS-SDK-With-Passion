/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, UICollectionViewCell;

__attribute__((visibility("hidden")))
@interface UICollectionViewReorderedItem : NSObject

{
    UICollectionViewCell *_cell;
    NSIndexPath *_originalIndexPath;
    NSIndexPath *_targetIndexPath;
    _Bool _pinned;
    CDUnknownBlockType _pinningTest;
    struct CGPoint _pinnedPreviousContentOffset;
}

@property (nonatomic, readonly) UICollectionViewCell *cell;
@property (retain, nonatomic) NSIndexPath *originalIndexPath;
@property (retain, nonatomic) NSIndexPath *targetIndexPath;
@property (nonatomic) _Bool pinned;
@property (nonatomic) struct CGPoint pinnedPreviousContentOffset;
@property (copy, nonatomic) CDUnknownBlockType pinningTest;

- (id)description;
- (_Bool)isNOOP;
- (id)initWithCell:(id)arg1 indexPath:(id)arg2;

@end
