/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class NSArray, NSString;

@protocol OS_dispatch_queue;

@interface AXHASecurityHelper : NSObject

{
    struct __SecIdentity *_appleIDIdentity;
    NSObject<OS_dispatch_queue> *_securityQueue;
    NSArray *_certificateDescription;
}

@property (retain, nonatomic) NSArray *certificateDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedHelper;

- (id)init;
- (void)dealloc;
- (id)securityTrustChainForStream:(id)arg1;
- (_Bool)shouldTrustStream:(id)arg1;
- (void)appleIDDidChange:(id)arg1;
- (_Bool)trustChainAvailable;
- (void)prepareHelper;
- (id)trustChain;
- (id)certificateChainForIdentity:(struct __SecIdentity *)arg1;
- (id)certificateChainFromTrust:(struct __SecTrust *)arg1;

@end
