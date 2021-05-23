/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import <CloudPhotoLibrary/Swift-Protocol.h>

@class NSString;

@interface CPLProxySession : CPLPlatformObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)finalizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)tearDownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dispatchBlockWhenLibraryIsOpen:(CDUnknownBlockType)arg1;
- (id)proxyLibraryManager;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
