/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/Swift-Protocol.h>

@class NSData;

@protocol SFDigestOperation <Swift>

@property (copy, readonly) NSData *hashValue;

+ (unsigned short)outputSize;
+ (unsigned short)blockSize;
+ (unsigned short)digest: /* Error: Ran out of types for this method. */;

- (unsigned short)addData: /* Error: Ran out of types for this method. */;

@end
