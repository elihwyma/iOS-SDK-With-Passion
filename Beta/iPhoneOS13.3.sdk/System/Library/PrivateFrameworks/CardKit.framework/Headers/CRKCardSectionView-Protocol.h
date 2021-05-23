/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <CardKit/Swift-Protocol.h>

@class NSString, UIView;

@protocol CRKComposableView;

@protocol CRKCardSectionView <Swift>

@property (copy, nonatomic) NSString *cardSectionViewIdentifier;
@property (weak, nonatomic) UIView<CRKComposableView> *composedSuperview;

+ (unsigned short)sizeThatFitsCardSection:boundingSize: /* Error: Ran out of types for this method. */;

- (unsigned short)sizeThatFits: /* Error: Ran out of types for this method. */;
- (unsigned short)removeFromComposedSuperview;

@end
