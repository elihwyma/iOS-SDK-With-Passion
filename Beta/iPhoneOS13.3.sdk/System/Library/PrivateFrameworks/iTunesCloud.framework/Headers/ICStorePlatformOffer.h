/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface ICStorePlatformOffer : NSObject

{
    NSDictionary *_responseDictionary;
}

@property (copy, nonatomic, readonly) NSArray *assets;
@property (copy, nonatomic, readonly) NSString *buyParameters;
@property (copy, nonatomic, readonly) NSString *formattedPrice;
@property (copy, nonatomic, readonly) NSString *offerType;
@property (copy, nonatomic, readonly) NSNumber *price;

- (id)initWithResponseDictionary:(id)arg1;

@end
