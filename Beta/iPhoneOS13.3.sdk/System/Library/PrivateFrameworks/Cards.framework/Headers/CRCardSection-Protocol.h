/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <Cards/Swift-Protocol.h>

@class NSArray, NSString;

@protocol SFCardSection;

@protocol CRCardSection <Swift>

@property (nonatomic, readonly) NSString *cardSectionIdentifier;
@property (nonatomic, readonly) id <SFCardSection> backingCardSection;
@property (nonatomic, readonly) NSArray *actionCommands;
@property (nonatomic, readonly) _Bool hasNextCard;

@end
