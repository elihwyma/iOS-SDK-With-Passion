/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class FBSOrientationObserverClient, FBSOrientationUpdate, NSString;

@protocol OS_dispatch_queue;

@interface FBSOrientationObserver : NSObject

{
    FBSOrientationObserverClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callback_queue;
    CDUnknownBlockType _handler;
    FBSOrientationUpdate *_freshestUpdate;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (long long)activeInterfaceOrientation;
- (id)_getAndSetFreshestUpdateGivenUpdate:(id)arg1;
- (void)activeInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (void)client:(id)arg1 handleOrientationUpdate:(id)arg2;
- (void)handleOrientationResetForClient:(id)arg1;

@end
