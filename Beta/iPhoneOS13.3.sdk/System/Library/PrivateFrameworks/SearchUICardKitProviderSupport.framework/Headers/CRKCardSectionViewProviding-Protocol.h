/*
 Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
 */

#import <SearchUICardKitProviderSupport/Swift-Protocol.h>

@class NSArray;

@protocol CRCard;

@protocol CRKCardSectionViewProviding <Swift>

@property (nonatomic, readonly) id <CRCard> card;
@property (nonatomic, readonly) NSArray *viewConfigurations;

@end
