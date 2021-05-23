/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSString, NSURLSession, NSURLSessionConfiguration, __NSCFURLSession;

@interface __NSCFURLSessionTaskGroup : NSObject

{
    NSURLSessionConfiguration *_groupConfiguration_ivar;
    __NSCFURLSession *_groupSession_ivar;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, readonly) NSURLSessionConfiguration *_groupConfiguration;
@property (weak, readonly) NSURLSession *_groupSession;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)_initWithTarget:(id)arg1 configuration:(id)arg2;

@end
