/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WKContentRuleListStore : NSObject

{
    struct ObjectStorage<API::ContentRuleListStore> _contentRuleListStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

+ (id)defaultStore;
+ (id)storeWithURL:(id)arg1;
+ (id)defaultStoreWithLegacyFilename;
+ (id)storeWithURLAndLegacyFilename:(id)arg1;

- (void)dealloc;
- (void)_compileContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)compileContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)lookUpContentRuleListForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getAvailableContentRuleListIdentifiers:(CDUnknownBlockType)arg1;
- (void)removeContentRuleListForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeAllContentRuleLists;
- (void)_invalidateContentRuleListVersionForIdentifier:(id)arg1;
- (void)_getContentRuleListSourceForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
