/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableArray, _DKKnowledgeSyncStorageAssertion;

@interface _DKSyncState : NSObject

{
    _Bool _needsCloudSyncDown;
    _Bool _needsCloudSyncUp;
    NSError *_error;
    _DKKnowledgeSyncStorageAssertion *_assertion;
    NSMutableArray *_replies;
}

@property (retain) _DKKnowledgeSyncStorageAssertion *assertion;
@property (retain) NSMutableArray *replies;
@property _Bool needsCloudSyncDown;
@property _Bool needsCloudSyncUp;
@property (retain) NSError *error;

- (void)finish;
- (void)addReplyBlock:(CDUnknownBlockType)arg1;
- (id)initWithSyncStorageAssertion:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
