/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class Protocol;

@interface NSXPCInterface : NSObject

{
    Protocol *_protocol;
    void *_reserved2;
    id _reserved1;
}

@property Protocol *protocol;

+ (id)interfaceWithProtocol:(id)arg1;
+ (id)signatureForBlock:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(_Bool)arg4;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(_Bool)arg4;
- (unsigned long long)version;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1;
- (id)_methodSignatureForRemoteSelector:(SEL)arg1;
- (id)_interfaceForArgument:(unsigned long long)arg1 ofSelector:(SEL)arg2 reply:(_Bool)arg3;
- (Class)_returnClassForSelector:(SEL)arg1;
- (_Bool)_hasProxiesInReplyBlockArgumentsOfSelector:(SEL)arg1;
- (Class)_customSubclass;
- (_Bool)_selectorIsAllowed:(SEL)arg1 isReply:(_Bool)arg2 methodSignature:(id *)arg3 allowedClasses:(id *)arg4;
- (unsigned long long)_remoteVersion;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(_Bool)arg3;
- (id)_generateAndCacheMethodSignatureForRemoteSelector:(SEL)arg1;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(_Bool)arg3;
- (void)setXPCType:(struct _xpc_type_s *)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(_Bool)arg4;
- (const struct _xpc_type_s *)XPCTypeForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(_Bool)arg3;
- (void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(_Bool)arg4;
- (Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(_Bool)arg3;
- (void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2;
- (id)replyBlockSignatureForSelector:(SEL)arg1;
- (void)setVersion:(unsigned long long)arg1 forSelector:(SEL)arg2;
- (unsigned long long)versionForSelector:(SEL)arg1;
- (void)set_remoteVersion:(unsigned long long)arg1;
- (unsigned long long)_respondsToRemoteSelector:(SEL)arg1;
- (_Bool)_hasProxiesInArgumentsOfSelector:(SEL)arg1;
- (id)_allowedClassesForSelector:(SEL)arg1 reply:(_Bool)arg2;

@end
