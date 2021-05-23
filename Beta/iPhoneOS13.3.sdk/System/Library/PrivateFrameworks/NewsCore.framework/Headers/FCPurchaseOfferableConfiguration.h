/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCPurchaseOfferableConfiguration : NSObject

{
    _Bool _allowsPublisherPhoneApp;
    _Bool _allowsPublisherPadApp;
    _Bool _allowsPublisherWebsite;
    _Bool _preferredOffer;
    NSString *_purchaseID;
}

@property (copy, nonatomic) NSString *purchaseID;
@property (nonatomic) _Bool allowsPublisherPhoneApp;
@property (nonatomic) _Bool allowsPublisherPadApp;
@property (nonatomic) _Bool allowsPublisherWebsite;
@property (nonatomic) _Bool preferredOffer;

- (id)initWithPurchaseID:(id)arg1 allowsPublisherPhoneApp:(_Bool)arg2 allowsPublisherPadApp:(_Bool)arg3 allowsPublisherWebsite:(_Bool)arg4 preferredOffer:(_Bool)arg5;

@end
