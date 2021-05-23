/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <NSObject.h>

@class NSString, SFFeedback;

@protocol CRCardSection;

@interface CRBasicCardSectionViewDisappearanceFeedback : NSObject

{
    id <CRCardSection> _cardSection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SFFeedback *backingFeedback;
@property (retain, nonatomic) id <CRCardSection> cardSection;

@end
