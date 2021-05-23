/*
 Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
 */

#import <SearchUICardKitProviderSupport/Swift-Protocol.h>

@class MISSING_TYPE, NSString, UIView;

@protocol CRKComposableView;

@protocol CRKCardSectionView <Swift>

@property (copy, nonatomic) NSString *cardSectionViewIdentifier;
@property (weak, nonatomic) UIView<CRKComposableView> *composedSuperview;

+ (MISSING_TYPE *)sizeThatFitsCardSection:boundingSize: /* Error: Ran out of types for this method. */;

- (MISSING_TYPE *)sizeThatFits: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)removeFromComposedSuperview;

@end
