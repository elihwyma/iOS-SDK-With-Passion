/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@protocol PMEditorAutoEditCompletionActionDelegate <Swift>

- (unsigned short)startAutoEditWaitingBehavior;
- (unsigned short)cancelAutoEditWaitingBehavior;
- (unsigned short)performAutoEditDidCompleteAction;

@end
