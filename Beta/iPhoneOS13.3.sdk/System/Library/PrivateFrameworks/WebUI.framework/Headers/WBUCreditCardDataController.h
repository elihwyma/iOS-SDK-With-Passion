/*
 Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <SafariShared/WBSCreditCardDataController.h>

@interface WBUCreditCardDataController : WBSCreditCardDataController

+ (id)sharedCreditCardDataController;

- (_Bool)_shouldOfferVirtualCards;
- (unsigned long long)virtualCardFieldsToRequest;
- (_Bool)hasUsedNonVirtualCard;
- (void)setHasUsedNonVirtualCard;

@end
