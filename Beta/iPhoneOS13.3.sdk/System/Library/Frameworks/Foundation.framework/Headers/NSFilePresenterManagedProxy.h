/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSFileAccessProcessManager;

@protocol NSFilePresenterXPCInterface><NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface NSFilePresenterManagedProxy : NSObject

{
    unsigned long long _filePresenterResponses;
    NSObject<NSFilePresenterXPCInterface><NSXPCProxyCreating> *_xpcProxy;
    NSObject<NSFilePresenterXPCInterface><NSXPCProxyCreating> *_nonboostingXPCProxy;
    NSFileAccessProcessManager *_processManager;
    CDUnknownBlockType _errorHandler;
}

@property unsigned long long filePresenterResponses;
@property (retain) NSFileAccessProcessManager *processManager;
@property (copy) CDUnknownBlockType errorHandler;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithXPCProxy:(id)arg1;
- (_Bool)_presenterRespondsToSelector:(SEL)arg1;
- (void)_safelySendMessageWithSelector:(SEL)arg1 withErrorCompletionHandler:(CDUnknownBlockType)arg2 sender:(CDUnknownBlockType)arg3;

@end
