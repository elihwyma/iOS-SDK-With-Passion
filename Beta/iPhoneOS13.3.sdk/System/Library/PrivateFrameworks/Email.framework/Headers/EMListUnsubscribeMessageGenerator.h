/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@interface EMListUnsubscribeMessageGenerator : NSObject

+ (id)dateString;
+ (id)messageHeadersWithCommand:(id)arg1 headersFactory:(id)arg2;
+ (id)localizedBodyForCommand:(id)arg1;
+ (id)senderForCommand:(id)arg1;

@end
