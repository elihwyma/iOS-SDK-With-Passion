/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/Swift-Protocol.h>

@class NSString;

@protocol EFQueueingStrategy <Swift>

@property (nonatomic, readonly) NSString *descriptionType;

- (unsigned short)enqueueObject:replaceIfExists:buffer: /* Error: Ran out of types for this method. */;
- (unsigned short)dequeueObject:buffer: /* Error: Ran out of types for this method. */;

@end
