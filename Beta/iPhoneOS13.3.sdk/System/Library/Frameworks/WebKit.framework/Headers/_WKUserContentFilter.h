/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _WKUserContentFilter : NSObject

{
    struct RetainPtr<WKContentRuleList> _contentRuleList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (id).cxx_construct;
- (id)_initWithWKContentRuleList:(id)arg1;

@end
