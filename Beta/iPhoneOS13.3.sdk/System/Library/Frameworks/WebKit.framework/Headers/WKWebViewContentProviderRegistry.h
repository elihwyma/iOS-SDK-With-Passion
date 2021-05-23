/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKWebViewContentProviderRegistry : NSObject

{
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider>>> _contentProviderForMIMEType;
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>> _pages;
}

- (id).cxx_construct;
- (id)initWithConfiguration:(id)arg1;
- (void)addPage:(struct WebPageProxy *)arg1;
- (void)removePage:(struct WebPageProxy *)arg1;
- (Class)providerForMIMEType:(const struct String *)arg1;
- (void)registerProvider:(Class)arg1 forMIMEType:(const struct String *)arg2;
- (Vector_14ac4456)_mimeTypesWithCustomContentProviders;

@end
