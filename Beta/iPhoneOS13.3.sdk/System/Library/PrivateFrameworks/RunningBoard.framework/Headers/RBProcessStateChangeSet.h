/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface RBProcessStateChangeSet : NSObject

{
    NSMutableDictionary *_stateChangesByIdentity;
}

@property (nonatomic, readonly) _Bool hasChanges;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithChanges:(id)arg1;
- (void)applyChanges:(id)arg1;
- (id)processStateChangeForIdentity:(id)arg1;
- (void)_diffOriginalStatesByIdentity:(id)arg1 withUpdatedStatesByIdentity:(id)arg2;
- (id)initWithOriginalStatesByIdentity:(id)arg1 updatedStatesByIdentity:(id)arg2;
- (id)processIdentities;

@end
