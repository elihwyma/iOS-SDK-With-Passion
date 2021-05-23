/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/_PFBatchFaultingArray.h>

@class NSPersistentHistoryTransaction;

__attribute__((visibility("hidden")))
@interface _PFBatchHistoryFaultingArray : _PFBatchFaultingArray

{
    NSPersistentHistoryTransaction *_transaction;
}

+ (Class)classForKeyedUnarchiver;

- (Class)classForCoder;
- (Class)classForArchiver;
- (void)_setTransaction:(id)arg1;
- (id)transaction;
- (id)initWithPFBatchFaultingArray:(id)arg1;

@end
