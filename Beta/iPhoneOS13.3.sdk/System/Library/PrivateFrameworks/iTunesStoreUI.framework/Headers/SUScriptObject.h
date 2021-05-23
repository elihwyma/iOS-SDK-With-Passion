/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSMutableSet, NSString, SUClientInterface, SUScriptNativeObject, SUScriptObjectInvocationBatch, WebFrame;

@interface SUScriptObject : NSObject

{
    NSMutableArray *_eventListeners;
    SUScriptObjectInvocationBatch *_invocationBatch;
    NSLock *_lock;
    SUScriptNativeObject *_nativeObject;
    SUScriptObject *_parentScriptObject;
    NSMutableSet *_scriptObjects;
    unsigned int _checkOutWhenHidden:1;
    unsigned int _isVisible:1;
    NSString *_className;
}

@property (retain) SUScriptNativeObject *nativeObject;
@property (readonly) struct OpaqueJSContext *copyJavaScriptContext;
@property (retain, readonly) SUClientInterface *clientInterface;
@property SUScriptObject *parentScriptObject;
@property (readonly) _Bool sourceIsTrusted;
@property (retain, readonly) WebFrame *webFrame;
@property (readonly) NSMutableArray *scriptAttributeKeys;
@property (readonly, getter=_className) NSString *className;

+ (void)initialize;
+ (_Bool)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (_Bool)isKeyExcludedFromWebScript:(const char *)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (id)stringRepresentation;
- (void)setVisible:(_Bool)arg1;
- (_Bool)isVisible;
- (id)parentViewController;
- (void)finalizeForWebScript;
- (void)checkInScriptObject:(id)arg1;
- (id)viewControllerFactory;
- (id)DOMElementWithElement:(id)arg1;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(_Bool)arg3;
- (void)tearDownUserInterface;
- (void)checkInScriptObjects:(id)arg1;
- (id)webThreadMainThreadBatchProxy;
- (void)checkOutBatchTarget:(id)arg1;
- (void)checkOutScriptObjects:(id)arg1;
- (id)_copyListenersForName:(id)arg1;
- (id)newImageWithURL:(id)arg1 scale:(double)arg2;
- (_Bool)scriptObjectIsCheckedIn:(id)arg1;
- (void)_checkOutAfterVisibilityChange;
- (void)checkOutScriptObject:(id)arg1;
- (void)addListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(_Bool)arg3;
- (_Bool)equals:(id)arg1;
- (void)removeListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(_Bool)arg3;
- (void)loadImageWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)newImageWithURL:(id)arg1;
- (id)invocationBatch:(_Bool)arg1;
- (void)didPerformBatchedInvocations;
- (void)willPerformBatchedInvocations;

@end
