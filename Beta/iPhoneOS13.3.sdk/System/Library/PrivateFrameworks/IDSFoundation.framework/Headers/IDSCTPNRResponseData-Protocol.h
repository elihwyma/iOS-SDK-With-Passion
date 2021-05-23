/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/Swift-Protocol.h>

@class NSData, NSString;

@protocol IDSCTPNRResponseData <Swift>

@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *phoneBookNumber;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) NSString *status;

@end
