/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, WKWebProcessPlugInNodeHandle;

@interface WKWebProcessPlugInHitTestResult : NSObject

{
    struct ObjectStorage<WebKit::InjectedBundleHitTestResult> _hitTestResult;
}

@property (readonly) WKWebProcessPlugInNodeHandle *nodeHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;

@end
