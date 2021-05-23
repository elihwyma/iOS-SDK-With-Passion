/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TTMergeableStringUndoAttributeCommand : NSObject

{
    vector_5b9fc061 *_attributeRanges;
}

@property (nonatomic, readonly) vector_5b9fc061 *attributeRanges;
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

@end
