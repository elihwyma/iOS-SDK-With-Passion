/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSBundle;

__attribute__((visibility("hidden")))
@interface _TVTemplateFactory : NSObject

{
    NSBundle *_tvmlKitBundle;
}

- (id)init;
- (void)_registerTemplateControllers;
- (void)_registerCustomAnimators;
- (void)registerProductTemplateURL:(id)arg1 forTemplateName:(id)arg2 includeParentStyleSheets:(_Bool)arg3;
- (void)_registerStyleSheet:(id)arg1 forTemplate:(id)arg2 parentStyleSheets:(id)arg3;

@end
