/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface ICAddToWishListResponse : NSObject

{
    NSDictionary *_responseDictionary;
}

@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly) NSString *message;

- (id)description;
- (id)initWithResponseDictionary:(id)arg1;

@end
