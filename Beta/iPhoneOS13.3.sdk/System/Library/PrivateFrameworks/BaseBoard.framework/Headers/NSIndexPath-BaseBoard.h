/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSIndexPath.h>

@interface NSIndexPath (BaseBoard)

+ (id)bs_emptyPath;

- (id)bs_subpathWithRange:(struct _NSRange)arg1;
- (id)bs_subpathFromPosition:(unsigned long long)arg1;
- (id)bs_indexPathByRemovingFirstIndex;
- (id)bs_indexPathByAddingPrefix:(id)arg1;
- (_Bool)bs_hasPrefix:(id)arg1;
- (id)bs_nearestCommonAncestorWithIndexPath:(id)arg1;

@end
