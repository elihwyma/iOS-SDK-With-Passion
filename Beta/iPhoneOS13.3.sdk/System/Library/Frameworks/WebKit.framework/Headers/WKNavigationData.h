/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSURLRequest, NSURLResponse;

@interface WKNavigationData : NSObject

{
    struct ObjectStorage<API::NavigationData> _data;
}

@property (readonly) NSString *title;
@property (readonly) NSURLRequest *originalRequest;
@property (readonly) NSURL *destinationURL;
@property (readonly) NSURLResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;

@end
