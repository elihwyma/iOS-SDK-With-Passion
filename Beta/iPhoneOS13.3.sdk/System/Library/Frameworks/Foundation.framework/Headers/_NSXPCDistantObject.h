/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSDictionary, NSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCDistantObject : NSObject <Swift>

{
    NSXPCConnection *_connection;
    NSXPCInterface *_remoteInterface;
    NSDictionary *_userInfo;
    CDUnknownBlockType _errorBlock;
    unsigned long long _proxyNumber;
    unsigned long long _generationCount;
    unsigned long long _flags;
    double _timeout;
}

@property (readonly) unsigned long long _proxyNumber;
@property (readonly) unsigned long long _generationCount;
@property (retain, readonly) NSXPCConnection *_connection;
@property (readonly) _Bool _exported;
@property (readonly) _Bool _noImportance;
@property (readonly) _Bool _sync;
@property (copy, readonly) CDUnknownBlockType _errorBlock;
@property (retain) NSXPCInterface *_remoteInterface;
@property (copy) NSDictionary *_userInfo;
@property double _timeout;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_forwardStackInvocation:(id)arg1;
- (id)_unboostingRemoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (id)_initWithConnection:(id)arg1 exportedObject:(id)arg2 interface:(id)arg3;
- (id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4 options:(unsigned long long)arg5 error:(CDUnknownBlockType)arg6;
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;

@end
