/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFGroupedItemDiff;

@interface HFItemManagerDelegateUpdateRequest : NSObject

{
    _Bool _initialUpdate;
    _Bool _debug_wasPerformed;
    HFGroupedItemDiff *_changes;
    CDUnknownBlockType _applyChangesBlock;
    CDUnknownBlockType _issueDelegateMessagesBlock;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType applyChangesBlock;
@property (copy, nonatomic, readonly) CDUnknownBlockType issueDelegateMessagesBlock;
@property (nonatomic, readonly) _Bool debug_wasPerformed;
@property (nonatomic, readonly) HFGroupedItemDiff *changes;
@property (nonatomic, readonly, getter=isInitialUpdate) _Bool initialUpdate;

- (id)init;
- (id)description;
- (id)initWithChanges:(id)arg1 isInitialUpdate:(_Bool)arg2 applyChangesBlock:(CDUnknownBlockType)arg3 issueDelegateMessagesBlock:(CDUnknownBlockType)arg4;
- (void)performWithOptions:(unsigned long long)arg1;

@end
