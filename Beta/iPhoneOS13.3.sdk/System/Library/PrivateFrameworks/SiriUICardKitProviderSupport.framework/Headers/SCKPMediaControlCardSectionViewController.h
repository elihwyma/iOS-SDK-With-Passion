/*
 Image: /System/Library/PrivateFrameworks/SiriUICardKitProviderSupport.framework/SiriUICardKitProviderSupport
 */

#import <UIKit/UIViewController.h>

@class AFSecurityConnection, NSString, SCKPMediaControlCardSectionView, SFMediaRemoteControlCardSection;

@protocol CRKCardSectionViewControllingDelegate;

@interface SCKPMediaControlCardSectionViewController : UIViewController

{
    AFSecurityConnection *_assistantSecurityConnection;
    UIViewController *_mediaPlatterViewController;
    id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;
    SFMediaRemoteControlCardSection *_cardSection;
}

@property (readonly) SFMediaRemoteControlCardSection *cardSection;
@property (readonly) SCKPMediaControlCardSectionView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;

+ (void)initialize;

- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (id)initWithMediaRemoteControlCardSection:(id)arg1;
- (void)_updatePlatterForHashedRouteUID:(id)arg1;
- (void)_updatePlatterForRouteUID:(id)arg1;

@end
