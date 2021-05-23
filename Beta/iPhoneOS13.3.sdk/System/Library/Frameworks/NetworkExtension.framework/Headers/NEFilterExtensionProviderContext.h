/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEExtensionProviderContext.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NSObject, NSString;

@protocol OS_dispatch_queue;

@interface NEFilterExtensionProviderContext : NEExtensionProviderContext <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_description;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
- (void)stopWithReason:(int)arg1;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
