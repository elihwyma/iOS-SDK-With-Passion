/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WKBrowsingContextGroup : NSObject

{
    struct ObjectStorage<WebKit::WebPageGroup> _pageGroup;
}

@property (readonly) struct OpaqueWKPageGroup *_pageGroupRef;
@property _Bool allowsJavaScript;
@property _Bool allowsPlugIns;
@property _Bool privateBrowsingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (_Bool)allowsJavaScriptMarkup;
- (void)setAllowsJavaScriptMarkup:(_Bool)arg1;
- (void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 mainFrameOnly:(_Bool)arg5;
- (void)removeAllUserStyleSheets;
- (void)addUserScript:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(_Bool)arg6;
- (void)removeAllUserScripts;

@end
