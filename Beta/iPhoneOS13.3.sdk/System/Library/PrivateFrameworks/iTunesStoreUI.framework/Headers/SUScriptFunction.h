/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSLock, SUScriptObject, WebScriptObject;

@interface SUScriptFunction : NSObject

{
    WebScriptObject *_function;
    NSLock *_lock;
    SUScriptObject *_thisObject;
}

@property (retain) WebScriptObject *scriptObject;
@property (weak) id thisObject;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (_Bool)callWithArguments:(id)arg1;
- (id)initWithScriptObject:(id)arg1;
- (_Bool)callWithArguments:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)callSynchronouslyWithArguments:(id)arg1;
- (id)_copyAdjustedArgumentsForArguments:(id)arg1;

@end
