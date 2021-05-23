/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <CardKit/Swift-Protocol.h>

@class CRKCardPresentationConfiguration;

@protocol CRCard;

@protocol CRKCardPresenting <Swift>

@property (copy, nonatomic) CRKCardPresentationConfiguration *configuration;
@property (nonatomic, readonly) id <CRCard> card;

- (unsigned short)setConfiguration:animated:completion: /* Error: Ran out of types for this method. */;

@end
