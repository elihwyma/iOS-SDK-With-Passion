/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (UIKitQueueAdditions)

- (id)_syncQueue;
- (void)_ui_enqueue:(id)arg1;
- (id)_ui_peek;
- (id)_ui_dequeue;
- (void)removeViewsFromSuperview;
- (void)_kb_reverse;
- (_Bool)_listContainsOrderedItems;
- (void)_set_listContainsOrderedItems:(_Bool)arg1;
- (void)_set_syncQueue:(id)arg1;
- (void)_uikbrtInsert:(id)arg1 before:(id)arg2;
- (void)_uikbrtInsert:(id)arg1 after:(id)arg2;
- (void)_uikbrtInsert:(id)arg1 beforeItemPassingTest:(CDUnknownBlockType)arg2;
- (void)_uikbrtRemove:(id)arg1;
- (void)_addObjectsFromArray:(id)arg1 range:(struct _NSRange)arg2;

@end
