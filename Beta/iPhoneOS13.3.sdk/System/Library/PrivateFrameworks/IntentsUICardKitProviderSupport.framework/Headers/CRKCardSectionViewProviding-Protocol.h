/*
 Image: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
 */

#import <IntentsUICardKitProviderSupport/Swift-Protocol.h>

@class NSArray;

@protocol CRCard;

@protocol CRKCardSectionViewProviding <Swift>

@property (nonatomic, readonly) id <CRCard> card;
@property (nonatomic, readonly) NSArray *viewConfigurations;

@end
