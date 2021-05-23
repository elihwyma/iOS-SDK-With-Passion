/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@protocol FBSOrientationObserverClientDelegate;

@interface FBSOrientationObserverClient : FBSServiceFacilityClient

{
    id <FBSOrientationObserverClientDelegate> _delegate;
    unsigned int _interest;
}

- (void)invalidate;
- (long long)activeInterfaceOrientation;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2;
- (void)activeInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerOrientationInterest:(unsigned int)arg1;
- (void)_getActiveInterfaceOrientationSynchronously:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)configureConnectMessage:(id)arg1;

@end
