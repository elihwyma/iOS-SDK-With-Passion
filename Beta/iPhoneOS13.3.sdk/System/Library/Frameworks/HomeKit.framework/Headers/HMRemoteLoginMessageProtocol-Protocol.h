/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/Swift-Protocol.h>

@class NSDictionary, NSString;

@protocol HMRemoteLoginMessageProtocol <Swift>

@property (copy, nonatomic, readonly) NSString *messageName;
@property (copy, nonatomic, readonly) NSString *xpcMessageName;
@property (nonatomic, readonly) NSDictionary *messagePayload;

+ (unsigned short)messageName;
+ (unsigned short)objWithDict: /* Error: Ran out of types for this method. */;
+ (unsigned short)objWithMessage: /* Error: Ran out of types for this method. */;
+ (unsigned short)xpcMessageName;

@end
