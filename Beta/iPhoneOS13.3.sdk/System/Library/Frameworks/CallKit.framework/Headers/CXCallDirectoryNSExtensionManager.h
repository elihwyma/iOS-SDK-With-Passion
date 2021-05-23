/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@protocol CXCallDirectoryNSExtensionManagerDelegate, OS_dispatch_queue;

@interface CXCallDirectoryNSExtensionManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <CXCallDirectoryNSExtensionManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id _extensionMatchingContext;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <CXCallDirectoryNSExtensionManagerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) id extensionMatchingContext;

+ (id)baseExtensionMatchingAttributes;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_beginMatchingExtensionsIfNecessary;
- (void)_extensionForIdentifier:(id)arg1 containingAppBundleURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginMatchingExtensions;
- (void)extensionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)extensionWithIdentifier:(id)arg1 inContainingAppWithProcessIdentifier:(int)arg2 completion:(CDUnknownBlockType)arg3;

@end
