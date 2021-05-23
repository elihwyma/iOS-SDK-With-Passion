/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, RBSAssertion;

@interface SBBackgroundFetchTask : NSObject

{
    struct os_unfair_lock_s _lock;
    NSString *_bundleID;
    int _sequenceNumber;
    RBSAssertion *_lock_assertion;
    CDUnknownBlockType _lock_completionHandler;
    _Bool _lock_finished;
}

+ (int)_nextSequenceNumber;

- (void)dealloc;
- (id)description;
- (void)execute;
- (void)finishWithResult:(unsigned long long)arg1;
- (id)initForApplication:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
