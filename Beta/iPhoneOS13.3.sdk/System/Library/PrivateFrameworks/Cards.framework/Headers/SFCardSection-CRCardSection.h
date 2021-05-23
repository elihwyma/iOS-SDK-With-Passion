/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <SFCardSection.h>

@class NSArray, NSString;

@protocol SFCardSection;

@interface SFCardSection (CRCardSection)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *cardSectionIdentifier;
@property (nonatomic, readonly) id <SFCardSection> backingCardSection;
@property (nonatomic, readonly) NSArray *actionCommands;
@property (nonatomic, readonly) _Bool hasNextCard;

- (id)parametersForInteraction:(id)arg1;

@end
