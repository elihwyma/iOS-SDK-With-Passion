/*
 Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
 */

#import <SearchUICardKitProviderSupport/Swift-Protocol.h>

@protocol CRCard, CRKCardSectionViewSourcing, CRKCardViewControllerDelegate;

@protocol CRKCardViewControlling <Swift>

@property (retain, nonatomic) id <CRCard> card;
@property (retain, nonatomic) id <CRKCardSectionViewSourcing> cardSectionViewSource;
@property (weak, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;

- (unsigned short)contentHeightForWidth: /* Error: Ran out of types for this method. */;

@end
