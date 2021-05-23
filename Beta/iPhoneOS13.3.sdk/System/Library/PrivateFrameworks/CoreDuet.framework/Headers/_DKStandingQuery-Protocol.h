/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@class NSObject, NSString;

@protocol OS_xpc_object;

@protocol _DKStandingQuery

@property (retain, nonatomic) NSString *queryIdentifier;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;

- (unsigned short)fetchResult;
- (unsigned short)executeWithStorage: /* Error: Ran out of types for this method. */;

@end
