/*
 Image: /System/Library/PrivateFrameworks/SiriUICardKitProviderSupport.framework/SiriUICardKitProviderSupport
 */

#import <CardKit/CRKCardSectionViewController.h>

@class CRKContainerCardSectionView;

@interface SCKPInteractiveCardSectionViewController : CRKCardSectionViewController

@property (retain, nonatomic) CRKContainerCardSectionView *view;

+ (id)cardSectionClasses;

- (void)_loadCardSectionView;
- (_Bool)_shouldRenderButtonOverlay;

@end
