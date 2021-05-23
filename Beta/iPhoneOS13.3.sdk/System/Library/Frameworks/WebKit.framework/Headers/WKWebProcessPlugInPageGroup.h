/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WKWebProcessPlugInPageGroup : NSObject

{
    struct ObjectStorage<WebKit::WebPageGroupProxy> _bundlePageGroup;
}

@property (readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;

@end
