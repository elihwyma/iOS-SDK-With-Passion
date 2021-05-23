/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface REMMutableCRUndo : NSObject

{
    NSMutableArray *_undoBlocks;
}

@property (nonatomic, readonly) NSMutableArray *undoBlocks;

- (id)init;
- (id)immutableCopy;
- (void)addUndoBlock:(CDUnknownBlockType)arg1;

@end
