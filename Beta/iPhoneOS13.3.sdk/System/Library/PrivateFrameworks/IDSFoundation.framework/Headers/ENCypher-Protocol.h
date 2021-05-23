/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/Swift-Protocol.h>

@class NSString;

@protocol ENCypher <Swift>

@property (nonatomic, readonly) NSString *identifier;

- (unsigned short)cypherData:withAccountIdentity:identifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)decypherData:withAccountIdentity:signingDevicePublicKey:identifier:error: /* Error: Ran out of types for this method. */;

@end
