/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TTMergeableStringUndoGroup : NSObject

{
    NSMutableDictionary *_seen;
    NSMutableArray *_commands;
}

@property (retain, nonatomic) NSMutableDictionary *seen;
@property (retain, nonatomic) NSMutableArray *commands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)applyToString:(id)arg1;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (_Bool)hasTopoIDsThatCanChange;
- (_Bool)addToGroup:(id)arg1;
- (void)closeGroup;
- (void)addCommand:(id)arg1;
- (_Bool)addSeenRange:(struct TopoIDRange)arg1;

@end
