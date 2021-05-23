/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <NSObject.h>

@class NSString, SFFeedback;

@protocol CRCard;

@interface CRBasicAsyncCardReceiptFeedback : NSObject

{
    id <CRCard> baseCard;
    id <CRCard> requestedCard;
    id <CRCard> receivedCard;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SFFeedback *backingFeedback;
@property (retain, nonatomic) id <CRCard> baseCard;
@property (retain, nonatomic) id <CRCard> requestedCard;
@property (retain, nonatomic) id <CRCard> receivedCard;

@end
