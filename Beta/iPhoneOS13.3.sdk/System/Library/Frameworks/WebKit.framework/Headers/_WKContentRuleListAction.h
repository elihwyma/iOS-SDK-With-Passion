/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _WKContentRuleListAction : NSObject

{
    struct ObjectStorage<API::ContentRuleListAction> _action;
}

@property (nonatomic, readonly) _Bool blockedLoad;
@property (nonatomic, readonly) _Bool blockedCookies;
@property (nonatomic, readonly) _Bool madeHTTPS;
@property (copy, nonatomic, readonly) NSArray *notifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;

@end
