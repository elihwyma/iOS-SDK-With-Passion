/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, PKPeerPaymentService;

@interface PKSharedPeerPaymentWebServiceArchiver : NSObject

{
    PKPeerPaymentService *_peerPaymentService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)archiveContext:(id)arg1;
- (id)initWithPeerPaymentService:(id)arg1;

@end
