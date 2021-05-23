/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKWebAllowDenyPolicyListener : NSObject

{
    Function_da50b38b _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (id)initWithCompletionHandler:(Function_da50b38b *)arg1;
- (void)allow;
- (void)deny;
- (_Bool)shouldClearCache;
- (void)denyOnlyThisRequest;

@end
