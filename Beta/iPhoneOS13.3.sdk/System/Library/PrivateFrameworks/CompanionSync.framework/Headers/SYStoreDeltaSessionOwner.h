/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/SYStoreSessionOwner.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SYStoreDeltaSessionOwner : SYStoreSessionOwner

{
    NSArray *_changes;
    unsigned long long _currentIdx;
}

@property (nonatomic, readonly) unsigned long long changeCount;

- (id)initWithChanges:(id)arg1;
- (long long)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;

@end
