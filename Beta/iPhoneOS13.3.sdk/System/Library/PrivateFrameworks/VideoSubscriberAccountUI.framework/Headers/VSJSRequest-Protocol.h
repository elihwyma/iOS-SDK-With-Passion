/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol VSJSRequest <Swift>

@property (copy, nonatomic, readonly) NSString *requestType;
@property (copy, nonatomic, readonly) NSString *requestBody;
@property (copy, nonatomic, readonly) NSString *currentAuthentication;
@property (copy, nonatomic, readonly) NSString *appleVerificationToken;
@property (copy, nonatomic, readonly) NSString *requestorVerificationToken;
@property (copy, nonatomic, readonly) NSArray *attributeNames;
@property (copy, nonatomic, readonly) NSDictionary *requestorInfo;

@end
