/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/Swift-Protocol.h>

@class IDSBaseMessage, NSArray, NSString;

@protocol FTMessageDeliveryProtocol <Swift>

@property (copy, nonatomic) NSString *userAgent;
@property (readonly) _Bool hasQueuedItems;
@property (readonly) _Bool busy;
@property _Bool retryInAirplaneMode;
@property _Bool logToRegistration;
@property (readonly) IDSBaseMessage *currentMessage;
@property (readonly) NSArray *queuedMessages;
@property (readonly) NSArray *allMessages;
@property (readonly) long long maxMessageSize;
@property (readonly) long long maxLargeMessageSize;
@property unsigned long long maxConcurrentMessages;

@end
