/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class ICQOffer, NSString, UIView;

@protocol OS_dispatch_queue, PXCloudQuotaControllerDelegate;

@interface PXCloudQuotaController : NSObject

{
    ICQOffer *_currentOffer;
    NSObject<OS_dispatch_queue> *_queue;
    UIView *_informationBanner;
    id <PXCloudQuotaControllerDelegate> _delegate;
}

@property (nonatomic, readonly) UIView *informationBanner;
@property (weak, nonatomic) id <PXCloudQuotaControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)presentingViewControllerForBannerView:(id)arg1;
- (void)_queue_initialSetup;
- (void)_updateCurrentOffer:(id)arg1;
- (void)_queue_getCurrentOffer;
- (void)_currentOfferChangedNotification:(id)arg1;

@end
