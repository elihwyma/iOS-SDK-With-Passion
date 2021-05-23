/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSFileProviderProxy, NSString;

@protocol NSFileProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileProviderXPCMessenger : NSObject

{
    id <NSFileProvider> _fileProvider;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileProviderProxy *_fileProviderProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)checkInProviderWithReply:(CDUnknownBlockType)arg1;
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFileProvider:(id)arg1 queue:(id)arg2;
- (void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 options:(unsigned long long)arg3 forAccessClaimWithID:(id)arg4 processIdentifier:(int)arg5 kernelOperation:(unsigned int)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)provideItemAtURL:(id)arg1 forClaimWithID:(id)arg2 madeByClientWithProcessIdentifier:(int)arg3 options:(unsigned long long)arg4 kernelOperation:(unsigned int)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (oneway void)cancelProvidingItemAtURL:(id)arg1 forClaimWithID:(id)arg2;
- (void)providePhysicalItemForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)observePresentationChangeOfKind:(id)arg1 forPresenterWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 observedUbiquityAttributes:(id)arg4 url:(id)arg5 newURL:(id)arg6;
- (oneway void)observeEndOfWriteAtURL:(id)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3;
- (void)movingItemAtURL:(id)arg1 requiresProvidingWithDestinationURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithFileProviderProxy:(id)arg1;

@end
