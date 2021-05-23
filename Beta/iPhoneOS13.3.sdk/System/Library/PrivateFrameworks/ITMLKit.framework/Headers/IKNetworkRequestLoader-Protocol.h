/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class NSString;

@protocol IKNetworkRequestLoader <Swift>

@property (copy, nonatomic) NSString *parentIdentifier;
@property (copy, nonatomic, readonly) NSString *identifier;

- (unsigned short)recordForResource:withInitiator: /* Error: Ran out of types for this method. */;

@end
