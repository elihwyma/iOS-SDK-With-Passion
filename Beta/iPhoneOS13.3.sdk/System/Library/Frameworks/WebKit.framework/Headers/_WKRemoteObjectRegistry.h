/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@interface _WKRemoteObjectRegistry : NSObject

{
    struct unique_ptr<WebKit::RemoteObjectRegistry, std::__1::default_delete<WebKit::RemoteObjectRegistry>> _remoteObjectRegistry;
    struct RetainPtr<NSMapTable> _remoteObjectProxies;
    struct HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>> _exportedObjects;
    struct HashMap<unsigned long long, PendingReply, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<PendingReply>> _pendingReplies;
}

@property (nonatomic, readonly) struct RemoteObjectRegistry *remoteObjectRegistry;

- (void)_invalidate;
- (id).cxx_construct;
- (void)_invokeMethod:(const struct RemoteObjectInvocation *)arg1;
- (void)_callReplyWithID:(unsigned long long)arg1 blockInvocation:(const struct UserData *)arg2;
- (void)_releaseReplyWithID:(unsigned long long)arg1;
- (void)_sendInvocation:(id)arg1 interface:(id)arg2;
- (void)registerExportedObject:(id)arg1 interface:(id)arg2;
- (void)unregisterExportedObject:(id)arg1 interface:(id)arg2;
- (id)remoteObjectProxyWithInterface:(id)arg1;
- (id)_initWithWebPage:(struct WebPage *)arg1;
- (id)_initWithWebPageProxy:(struct WebPageProxy *)arg1;

@end
