/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXCPLServiceStatus;

@protocol OS_dispatch_queue, PXCPLService;

@interface PXMockCPLService : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <PXCPLService> _cplService;
    PXCPLServiceStatus *_serviceStatus;
    CDUnknownBlockType _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType handler;

+ (id)_mockEvent;
+ (_Bool)shouldUseMockService;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)performAction:(long long)arg1;
- (_Bool)canPerformAction:(long long)arg1;
- (id)initWithCPLService:(id)arg1;
- (void)_deliverMockServiceStatus;
- (void)_serviceStatusDidChange:(id)arg1;

@end
