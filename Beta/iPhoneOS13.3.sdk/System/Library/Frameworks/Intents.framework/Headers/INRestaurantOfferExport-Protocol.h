/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol INRestaurantOfferExport <Swift>

@property (copy, nonatomic) NSString *offerTitleText;
@property (copy, nonatomic) NSString *offerDetailText;
@property (copy, nonatomic) NSString *offerIdentifier;

- (unsigned short)init;

@end
