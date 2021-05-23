/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSNumber, NSString;

@interface AAMobileMeOfferResponse : AAResponse

@property (nonatomic, readonly) NSNumber *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *classicTitle;
@property (nonatomic, readonly) NSString *classicMessage;

@end
