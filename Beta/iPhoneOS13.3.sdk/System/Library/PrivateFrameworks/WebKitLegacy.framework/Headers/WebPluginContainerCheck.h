/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLRequest, WebPolicyDecisionListener;

@protocol WebPluginContainerCheckController;

__attribute__((visibility("hidden")))
@interface WebPluginContainerCheck : NSObject

{
    NSURLRequest *_request;
    NSString *_target;
    id <WebPluginContainerCheckController> _controller;
    id _resultObject;
    SEL _resultSelector;
    id _contextInfo;
    _Bool _done;
    WebPolicyDecisionListener *_listener;
}

+ (id)checkWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6;
- (void)_continueWithPolicy:(unsigned char)arg1;
- (id)_actionInformationWithURL:(id)arg1;
- (_Bool)_isForbiddenFileLoad;
- (void)_askPolicyDelegate;
- (id)contextInfo;

@end
