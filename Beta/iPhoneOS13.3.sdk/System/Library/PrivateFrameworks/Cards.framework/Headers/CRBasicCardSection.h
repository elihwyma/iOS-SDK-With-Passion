/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <NSObject.h>

@class NSArray, NSString;

@protocol SFCardSection;

@interface CRBasicCardSection : NSObject

{
    NSString *_cardSectionIdentifier;
    id <SFCardSection> _backingCardSection;
}

@property (retain, nonatomic) id <SFCardSection> backingCardSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *cardSectionIdentifier;
@property (nonatomic, readonly) NSArray *actionCommands;
@property (nonatomic, readonly) _Bool hasNextCard;

+ (_Bool)supportsSecureCoding;
+ (id)basicCardSectionWithBackingCardSection:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
