/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSArray, NSDictionary, NSString;

@interface ATVHighSecurityAccountDeviceListResponse : AAResponse

@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) NSDictionary *userDisplayStrings;
@property (nonatomic, readonly) NSString *errorTitle;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) long long errorCode;

@end
