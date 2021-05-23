/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSFileAccessArbiter, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileAccessSubarbiter : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSFileAccessArbiter *_realSubarbiter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (oneway void)revokeAccessClaimForID:(id)arg1;
- (oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (oneway void)cancelAccessClaimForID:(id)arg1;
- (oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (oneway void)revokeSubarbitrationClaimForID:(id)arg1;
- (oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3;
- (oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
- (void)stopArbitrating;
- (id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(_Bool)arg2;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (id)initWithQueue:(id)arg1 listener:(id)arg2;

@end
