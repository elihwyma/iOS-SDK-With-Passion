/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface AMSLookupItemOffer : NSObject

{
    NSDictionary *_lookupDictionary;
}

@property (nonatomic, readonly) NSString *buyParameters;
@property (nonatomic, readonly) NSString *formattedPrice;
@property (nonatomic, readonly) NSDictionary *lookupDictionary;
@property (nonatomic, readonly) NSString *offerType;
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly) NSString *subscriptionType;

- (id)initWithLookupDictionary:(id)arg1;
- (id)actionTextForType:(id)arg1;

@end
