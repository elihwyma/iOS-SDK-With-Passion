/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, WKContentRuleListStore;

@interface _WKUserContentExtensionStore : NSObject

{
    struct RetainPtr<WKContentRuleListStore> _contentRuleListStore;
}

@property (nonatomic, readonly) WKContentRuleListStore *_contentRuleListStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

+ (id)defaultStore;
+ (id)storeWithURL:(id)arg1;

- (id).cxx_construct;
- (id)_initWithWKContentRuleListStore:(id)arg1;
- (void)compileContentExtensionForIdentifier:(id)arg1 encodedContentExtension:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)lookupContentExtensionForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeContentExtensionForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeAllContentExtensions;
- (void)_invalidateContentExtensionVersionForIdentifier:(id)arg1;

@end
