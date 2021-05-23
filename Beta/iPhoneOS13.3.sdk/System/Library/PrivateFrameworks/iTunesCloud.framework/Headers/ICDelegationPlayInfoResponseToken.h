/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSData, NSDate, NSString;

@interface ICDelegationPlayInfoResponseToken : NSObject

{
    NSData *_tokenData;
    NSDate *_expirationDate;
    NSString *_storefrontIdentifier;
}

@property (copy, nonatomic) NSData *tokenData;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *storefrontIdentifier;

@end
