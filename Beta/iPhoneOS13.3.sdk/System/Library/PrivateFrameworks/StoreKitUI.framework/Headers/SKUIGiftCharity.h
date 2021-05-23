/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SKUIArtwork;

__attribute__((visibility("hidden")))
@interface SKUIGiftCharity : NSObject

{
    NSString *_amountDisclaimer;
    NSArray *_amounts;
    NSString *_description;
    NSString *_identifier;
    NSString *_legalText;
    NSString *_legalText2;
    SKUIArtwork *_logoArtwork;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *amountDisclaimer;
@property (nonatomic, readonly) NSString *charityDescription;
@property (nonatomic, readonly) NSString *legalText;
@property (nonatomic, readonly) NSString *legalText2;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *donationAmounts;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) SKUIArtwork *logoArtwork;

- (id)initWithCharityDictionary:(id)arg1;

@end
