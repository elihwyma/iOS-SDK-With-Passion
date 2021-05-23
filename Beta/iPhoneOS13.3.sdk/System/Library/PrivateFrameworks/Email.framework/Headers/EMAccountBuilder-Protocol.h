/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@class NSString;

@protocol EMAccountBuilder <Swift>

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *hostname;
@property (nonatomic, getter=isPrimaryiCloudAccount) _Bool primaryiCloudAccount;

@end
