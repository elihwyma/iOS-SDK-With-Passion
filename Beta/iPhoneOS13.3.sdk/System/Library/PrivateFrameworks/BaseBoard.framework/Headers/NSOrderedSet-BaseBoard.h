/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSOrderedSet.h>

@interface NSOrderedSet (BaseBoard)

- (id)bs_filter:(CDUnknownBlockType)arg1;
- (id)bs_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)bs_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)bs_map:(CDUnknownBlockType)arg1;
- (id)bs_compactMap:(CDUnknownBlockType)arg1;
- (id)bs_reduce:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
