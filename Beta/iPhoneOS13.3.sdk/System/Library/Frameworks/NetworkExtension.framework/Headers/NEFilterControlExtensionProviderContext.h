/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterExtensionProviderContext.h>

@class NSString;

@interface NEFilterControlExtensionProviderContext : NEFilterExtensionProviderContext

{
    _Bool _observing;
}

@property _Bool observing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)extensionPoint;
- (void)stopObserving;
- (void)dispose;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleNewFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleReport:(id)arg1;
- (void)notifyRulesChanged;
- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;

@end
