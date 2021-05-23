/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@class NSArray, NSString;

@protocol ECMailAccount <Swift>

@property (copy, nonatomic, readonly) NSArray *emailAddressStrings;
@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic, readonly) NSString *identifier;

- (unsigned short)systemAccount;

@end
