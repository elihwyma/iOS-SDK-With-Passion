/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@protocol SBLayoutElementDescriptor <Swift>

@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) long long layoutRole;
@property (nonatomic, readonly) unsigned long long supportedLayoutRoles;
@property (nonatomic, readonly) unsigned long long layoutAttributes;
@property (nonatomic, readonly) Class viewControllerClass;
@property (copy, nonatomic, readonly) CDUnknownBlockType entityGenerator;

- (unsigned short)supportsLayoutRole: /* Error: Ran out of types for this method. */;
- (unsigned short)hasLayoutAttributes: /* Error: Ran out of types for this method. */;

@end
