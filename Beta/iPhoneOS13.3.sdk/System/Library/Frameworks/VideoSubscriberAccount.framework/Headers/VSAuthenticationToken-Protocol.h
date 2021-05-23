/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/Swift-Protocol.h>

@class NSData, NSDate, NSString;

@protocol VSAuthenticationToken <Swift>

@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic, readonly) NSData *serializedData;

- (unsigned short)isValid;
- (unsigned short)isOpaque;
- (unsigned short)initWithSerializedData: /* Error: Ran out of types for this method. */;
- (unsigned short)isFromUnsupportedProvider;

@end
