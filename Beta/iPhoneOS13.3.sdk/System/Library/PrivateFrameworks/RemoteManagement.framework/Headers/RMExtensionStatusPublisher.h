/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

#import <RemoteManagement/Swift-Protocol.h>

@class NSLock, NSString;

@protocol RMExtensionStatusPublisherRequestHandling;

@interface RMExtensionStatusPublisher : NSObject <Swift>

{
    NSLock *_requestHandlerLock;
    id <RMExtensionStatusPublisherRequestHandling> _requestHandler;
}

@property (nonatomic, readonly) id <RMExtensionStatusPublisherRequestHandling> requestHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedPublisher;

- (id)init;
- (void)queryStatusesOfTypes:(id)arg1 onBehalfOfAccount:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRequestHandler:(id)arg1;

@end
