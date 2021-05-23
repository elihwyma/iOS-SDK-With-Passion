/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLRequest, NSURLResponse, WKFrameInfo;

@interface WKNavigationResponse : NSObject

{
    struct ObjectStorage<API::NavigationResponse> _navigationResponse;
}

@property (nonatomic, readonly) WKFrameInfo *_frame;
@property (nonatomic, readonly) NSURLRequest *_request;
@property (nonatomic, readonly) NSString *_downloadAttribute;
@property (nonatomic, readonly, getter=isForMainFrame) _Bool forMainFrame;
@property (copy, nonatomic, readonly) NSURLResponse *response;
@property (nonatomic, readonly) _Bool canShowMIMEType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;

@end
