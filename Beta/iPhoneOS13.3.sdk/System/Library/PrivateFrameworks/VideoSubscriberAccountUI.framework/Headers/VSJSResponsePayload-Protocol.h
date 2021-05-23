/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/Swift-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString;

@protocol VSJSResponsePayload <Swift>

@property (copy, nonatomic) NSString *authN;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *userMetadata;
@property (copy, nonatomic) NSString *logout;
@property (copy, nonatomic) NSArray *userChannelList;
@property (copy, nonatomic) NSString *authenticationScheme;
@property (copy, nonatomic) NSString *statusCode;
@property (copy, nonatomic) NSNumber *expectedAction;
@property (copy, nonatomic) NSArray *subscriptions;
@property (copy, nonatomic) NSArray *clearSubscriptions;
@property (copy, nonatomic) NSString *appBundleIdentifier;

- (unsigned short)init;

@end
