/*
 Image: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
 */

#import <IntentsUICardKitProviderSupport/INUICKPSynchronousRemoteViewController.h>

@class NSString;

@protocol CRKCardSectionViewControllingDelegate;

@interface INUICKPExtensionCardSectionViewController : INUICKPSynchronousRemoteViewController

{
    id _touchDeliveryPolicyAssertion;
    id <CRKCardSectionViewControllingDelegate> _cardSectionViewControllingDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;

- (void)desiresInteractivity:(CDUnknownBlockType)arg1;
- (void)remoteViewControllerWillBeginEditing:(id)arg1;
- (void)remoteViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;

@end
