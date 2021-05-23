/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString;

@interface UICollectionViewPlaceholder : NSObject

{
    NSIndexPath *_insertionIndexPath;
    NSString *_cellReuseIdentifier;
    CDUnknownBlockType _cellUpdateHandler;
}

@property (retain, nonatomic) NSIndexPath *insertionIndexPath;
@property (copy, nonatomic) NSString *cellReuseIdentifier;
@property (copy, nonatomic) CDUnknownBlockType cellUpdateHandler;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2;

@end
