/*
 Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

#import <Foundation/NSObject.h>

@class JSValue, JSVirtualMachine, NSString;

@interface JSContext : NSObject

{
    JSVirtualMachine *m_virtualMachine;
    struct OpaqueJSContext *m_context;
    struct Strong<JSC::JSObject> m_exception;
    struct WeakObjCPtr<id<JSModuleLoaderDelegate>> m_moduleLoaderDelegate;
    CDUnknownBlockType _exceptionHandler;
}

@property (readonly) JSValue *globalObject;
@property (retain) JSValue *exception;
@property (copy) CDUnknownBlockType exceptionHandler;
@property (readonly) JSVirtualMachine *virtualMachine;
@property (copy) NSString *name;

+ (id)currentContext;
+ (id)contextWithJSGlobalContextRef:(struct OpaqueJSContext *)arg1;
+ (id)currentThis;
+ (id)currentCallee;
+ (id)currentArguments;

- (id)init;
- (void)dealloc;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id).cxx_construct;
- (struct OpaqueJSContext *)JSGlobalContextRef;
- (id)evaluateScript:(id)arg1;
- (id)moduleLoaderDelegate;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext *)arg1;
- (id)initWithVirtualMachine:(id)arg1;
- (void)ensureWrapperMap;
- (id)evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (id)valueFromNotifyException:(struct OpaqueJSValue *)arg1;
- (id)evaluateJSScript:(id)arg1;
- (id)dependencyIdentifiersForModuleJSScript:(id)arg1;
- (_Bool)_remoteInspectionEnabled;
- (void)_setRemoteInspectionEnabled:(_Bool)arg1;
- (_Bool)_includesNativeCallStackWhenReportingExceptions;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(_Bool)arg1;
- (struct __CFRunLoop *)_debuggerRunLoop;
- (void)_setDebuggerRunLoop:(struct __CFRunLoop *)arg1;
- (void)setModuleLoaderDelegate:(id)arg1;
- (void)notifyException:(struct OpaqueJSValue *)arg1;
- (id)wrapperMap;
- (_Bool)boolFromNotifyException:(struct OpaqueJSValue *)arg1;
- (void)beginCallbackWithData:(struct CallbackData *)arg1 calleeValue:(struct OpaqueJSValue *)arg2 thisValue:(struct OpaqueJSValue *)arg3 argumentCount:(unsigned long long)arg4 arguments:(const struct OpaqueJSValue **)arg5;
- (void)endCallbackWithData:(struct CallbackData *)arg1;
- (id)wrapperForObjCObject:(id)arg1;
- (id)wrapperForJSObject:(struct OpaqueJSValue *)arg1;

@end
