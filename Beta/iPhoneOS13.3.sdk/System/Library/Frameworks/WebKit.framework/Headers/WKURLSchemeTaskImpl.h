/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLRequest;

__attribute__((visibility("hidden")))
@interface WKURLSchemeTaskImpl : NSObject

{
    struct ObjectStorage<API::URLSchemeTask> _urlSchemeTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;
@property (copy, nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly) _Bool _requestOnlyIfCached;

- (void)dealloc;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
- (void)didFinish;
- (void)didFailWithError:(id)arg1;
- (void)_didPerformRedirection:(id)arg1 newRequest:(id)arg2;

@end
