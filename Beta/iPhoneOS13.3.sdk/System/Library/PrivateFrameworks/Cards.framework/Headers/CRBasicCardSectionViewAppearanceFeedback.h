/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <NSObject.h>

@class NSString, SFFeedback;

@protocol CRCardSection;

@interface CRBasicCardSectionViewAppearanceFeedback : NSObject

{
    id <CRCardSection> _cardSection;
}

@property (retain, nonatomic) id <CRCardSection> cardSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SFFeedback *backingFeedback;

@end
