/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKAccessibilityWebPageObjectBase : NSObject

{
    struct WebPage *m_page;
    ObjectIdentifier_8136369e m_pageID;
    id m_parent;
    _Bool m_hasMainFramePlugin;
}

- (id).cxx_construct;
- (id)accessibilityRootObjectWrapper;
- (void)setHasMainFramePlugin:(_Bool)arg1;
- (void)setWebPage:(struct WebPage *)arg1;
- (id)accessibilityPluginObject;
- (struct AXObjectCache *)axObjectCache;
- (id)accessibilityFocusedUIElement;
- (void)setRemoteParent:(id)arg1;

@end
