/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <BoardServices/Swift-Protocol.h>

@class NSString;

@protocol BSServiceListener <Swift>

@property (copy, nonatomic, readonly) NSString *service;
@property (copy, nonatomic, readonly) NSString *instance;

- (unsigned short)didReceiveConnection: /* Error: Ran out of types for this method. */;

@end
