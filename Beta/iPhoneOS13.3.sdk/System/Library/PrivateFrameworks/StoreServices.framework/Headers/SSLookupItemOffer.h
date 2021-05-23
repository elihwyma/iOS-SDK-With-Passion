/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface SSLookupItemOffer : NSObject

{
    NSDictionary *_dictionary;
}

@property (nonatomic, readonly) NSDictionary *lookupDictionary;
@property (nonatomic, readonly) NSString *buyParameters;
@property (nonatomic, readonly) NSString *formattedPrice;
@property (nonatomic, readonly) NSString *offerType;
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly) NSString *subscriptionType;

- (void)dealloc;
- (id)initWithLookupDictionary:(id)arg1;
- (id)actionTextForType:(id)arg1;

@end
