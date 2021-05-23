/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface REMCRUndo : NSObject

{
    NSArray *_undoBlocks;
}

@property (nonatomic, readonly) NSArray *undoBlocks;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUndoBlocks:(id)arg1;

@end
