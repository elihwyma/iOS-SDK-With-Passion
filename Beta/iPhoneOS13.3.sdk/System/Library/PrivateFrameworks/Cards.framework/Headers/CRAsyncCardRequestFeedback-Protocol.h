/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <Cards/Swift-Protocol.h>

@protocol CRCard;

@protocol CRAsyncCardRequestFeedback <Swift>

@property (retain, nonatomic) id <CRCard> baseCard;
@property (retain, nonatomic) id <CRCard> requestedCard;

@end
