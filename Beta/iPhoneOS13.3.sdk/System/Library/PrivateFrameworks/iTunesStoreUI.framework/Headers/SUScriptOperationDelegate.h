/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

#import <iTunesStoreUI/Swift-Protocol.h>

@class NSLock, NSMutableArray, NSString;

@interface SUScriptOperationDelegate : NSObject <Swift>

{
    NSMutableArray *_operations;
    NSLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancelAllOperations;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)enqueueOperation:(id)arg1;
- (void)_removeOperation:(id)arg1;

@end
