/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TTMergeableStringUndoEditCommand : NSObject

{
    vector_4b213608 *_deleteRanges;
    vector_252d7b3a *_insertStrings;
}

@property (nonatomic, readonly) vector_4b213608 *deleteRanges;
@property (nonatomic, readonly) vector_252d7b3a *insertStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)applyToString:(id)arg1;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (_Bool)hasTopoIDsThatCanChange;
- (_Bool)addToGroup:(id)arg1;
- (void)updateInsertTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;

@end
