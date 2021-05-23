/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class NSArray, NSString;

@protocol SFCardSection;

@interface SiriUILegacyCardSection : NSObject

{
    NSString *_cardSectionIdentifier;
}

@property (retain, nonatomic) NSString *cardSectionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SFCardSection> backingCardSection;
@property (nonatomic, readonly) NSArray *actionCommands;
@property (nonatomic, readonly) _Bool hasNextCard;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
