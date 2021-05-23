/*
 Image: /System/Library/PrivateFrameworks/SiriUICardKitProviderSupport.framework/SiriUICardKitProviderSupport
 */

#import <SiriUICardKitProviderSupport/Swift-Protocol.h>

@class NSArray;

@protocol CRCard;

@protocol CRKCardSectionViewProviding <Swift>

@property (nonatomic, readonly) id <CRCard> card;
@property (nonatomic, readonly) NSArray *viewConfigurations;

@end
