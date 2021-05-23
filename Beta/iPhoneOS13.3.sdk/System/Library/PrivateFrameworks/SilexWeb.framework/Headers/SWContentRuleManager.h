/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString, WKUserContentController;

@protocol OS_dispatch_group;

@interface SWContentRuleManager : NSObject

{
    WKUserContentController *_userContentController;
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

@property (nonatomic, readonly) WKUserContentController *userContentController;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *dispatchGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addContentRuleList:(id)arg1 identifier:(id)arg2;
- (void)removeContentListForIdentifier:(id)arg1;
- (id)configureContentRules;
- (id)initWithUserContentController:(id)arg1;

@end
