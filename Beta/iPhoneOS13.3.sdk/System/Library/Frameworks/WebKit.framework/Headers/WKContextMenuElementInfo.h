/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface WKContextMenuElementInfo : NSObject

{
    struct ObjectStorage<API::ContextMenuElementInfo> _elementInfo;
}

@property (nonatomic, readonly) NSURL *linkURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (id)_activatedElementInfo;

@end
