/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WKUserContentController : NSObject

{
    struct ObjectStorage<WebKit::WebUserContentControllerProxy> _userContentControllerProxy;
}

@property (copy, nonatomic, readonly) NSArray *_userStyleSheets;
@property (copy, nonatomic, readonly) NSArray *userScripts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_addUserStyleSheet:(id)arg1;
- (void)removeAllUserScripts;
- (void)addUserScript:(id)arg1;
- (void)addContentRuleList:(id)arg1;
- (void)removeContentRuleList:(id)arg1;
- (void)removeAllContentRuleLists;
- (void)addScriptMessageHandler:(id)arg1 name:(id)arg2;
- (void)removeScriptMessageHandlerForName:(id)arg1;
- (void)_removeUserScript:(id)arg1;
- (void)_removeAllUserScriptsAssociatedWithUserContentWorld:(id)arg1;
- (void)_addUserScriptImmediately:(id)arg1;
- (void)_addUserContentFilter:(id)arg1;
- (void)_removeUserContentFilter:(id)arg1;
- (void)_removeAllUserContentFilters;
- (void)_removeUserStyleSheet:(id)arg1;
- (void)_removeAllUserStyleSheets;
- (void)_removeAllUserStyleSheetsAssociatedWithUserContentWorld:(id)arg1;
- (void)_addScriptMessageHandler:(id)arg1 name:(id)arg2 userContentWorld:(id)arg3;
- (void)_removeScriptMessageHandlerForName:(id)arg1 userContentWorld:(id)arg2;
- (void)_removeAllScriptMessageHandlersAssociatedWithUserContentWorld:(id)arg1;

@end
