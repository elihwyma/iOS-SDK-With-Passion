/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, WKBrowsingContextHandle, WKDOMDocument, WKDOMRange, WKWebProcessPlugInFrame, WKWebProcessPlugInPageGroup, _WKRemoteObjectRegistry;

@protocol WKWebProcessPlugInEditingDelegate, WKWebProcessPlugInFormDelegatePrivate, WKWebProcessPlugInLoadDelegate;

@interface WKWebProcessPlugInBrowserContextController : NSObject

{
    struct ObjectStorage<WebKit::WebPage> _page;
    struct WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate>> _loadDelegate;
    struct WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate>> _formDelegate;
    struct WeakObjCPtr<id<WKWebProcessPlugInEditingDelegate>> _editingDelegate;
    struct RetainPtr<_WKRemoteObjectRegistry> _remoteObjectRegistry;
}

@property (nonatomic, readonly) struct OpaqueWKBundlePage *_bundlePageRef;
@property (nonatomic, readonly) WKBrowsingContextHandle *handle;
@property (nonatomic, readonly) _WKRemoteObjectRegistry *_remoteObjectRegistry;
@property (weak, setter=_setFormDelegate:) id <WKWebProcessPlugInFormDelegatePrivate> _formDelegate;
@property (weak, setter=_setEditingDelegate:) id <WKWebProcessPlugInEditingDelegate> _editingDelegate;
@property (nonatomic, setter=_setDefersLoading:) _Bool _defersLoading;
@property (nonatomic, readonly) _Bool _usesNonPersistentWebsiteDataStore;
@property (readonly) WKDOMDocument *mainFrameDocument;
@property (readonly) WKDOMRange *selectedRange;
@property (readonly) WKWebProcessPlugInFrame *mainFrame;
@property (readonly) WKWebProcessPlugInPageGroup *pageGroup;
@property (weak) id <WKWebProcessPlugInLoadDelegate> loadDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

+ (id)lookUpBrowsingContextFromHandle:(id)arg1;

- (void)dealloc;
- (id).cxx_construct;

@end
