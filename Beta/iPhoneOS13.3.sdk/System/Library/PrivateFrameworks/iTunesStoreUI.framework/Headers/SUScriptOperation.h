/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISOperation.h>

@class WebScriptObject;

@interface SUScriptOperation : ISOperation

{
    id _options;
    ISOperation *_wrappedOperation;
    WebScriptObject *_callbackFunction;
}

+ (Class)postOperationClassForType:(id)arg1;
+ (void)registerPostOperationClass:(Class)arg1 forType:(id)arg2;

- (void)dealloc;
- (void)run;
- (id)initWithPostType:(id)arg1 options:(id)arg2;
- (id)initWithOperation:(id)arg1 options:(id)arg2;
- (id)initWithOperation:(id)arg1 callback:(id)arg2;
- (void)setScriptOptions:(id)arg1;
- (void)_sendCompletionCallback;
- (id)_scriptOptions;

@end
