/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class PXCPLServiceStatus;

@protocol PXCPLService, PXCPLServiceUIDelegate, PXCPLServiceUIStatus;

@interface PXCPLServiceUI : PXObservable

{
    id <PXCPLService> _cplService;
    struct {
        _Bool progressDidChange;
        _Bool performAction;
    } _delegateRespondsTo;
    PXCPLServiceStatus *_serviceStatus;
    id <PXCPLServiceUIStatus> _serviceUIStatus;
    id <PXCPLServiceUIDelegate> _delegate;
}

@property (nonatomic, readonly) PXCPLServiceStatus *serviceStatus;
@property (nonatomic, readonly) id <PXCPLServiceUIStatus> serviceUIStatus;
@property (weak, nonatomic) id <PXCPLServiceUIDelegate> delegate;

- (id)init;
- (void)_performAction:(long long)arg1;
- (_Bool)performDefaultHandlerForAction:(long long)arg1;
- (id)initWithCPLService:(id)arg1;
- (void)_serviceUIStatusDidChange:(id)arg1 nonProgressPropertiesDidChange:(_Bool)arg2 progressDidChange:(_Bool)arg3;
- (void)_handleUpdatedServiceStatus:(id)arg1;

@end
