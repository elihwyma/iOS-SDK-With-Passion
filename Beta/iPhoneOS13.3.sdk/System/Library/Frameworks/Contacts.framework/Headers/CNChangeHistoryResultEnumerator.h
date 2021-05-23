/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSEnumerator.h>

@class CNQueue;

@protocol CNEnumeratorRefillStrategy;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryResultEnumerator : NSEnumerator

{
    CNQueue *_changes;
    CNQueue *_batchFetchQueue;
    id <CNEnumeratorRefillStrategy> _refillStrategy;
}

@property (copy, nonatomic, readonly) CNQueue *changes;
@property (nonatomic, readonly) CNQueue *batchFetchQueue;
@property (nonatomic, readonly) id <CNEnumeratorRefillStrategy> refillStrategy;

+ (id)contactEnumeratorWithChanges:(id)arg1 keysToFetch:(id)arg2 unifyResults:(_Bool)arg3 contactStore:(id)arg4;
+ (id)groupEnumeratorWithChanges:(id)arg1 contactStore:(id)arg2;

- (id)nextObject;
- (id)initWithChanges:(id)arg1 refillStrategy:(id)arg2;
- (void)_fetchNextBatch;

@end
