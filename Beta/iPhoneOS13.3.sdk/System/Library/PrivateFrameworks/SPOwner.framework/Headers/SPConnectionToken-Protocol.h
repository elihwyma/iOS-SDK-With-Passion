/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <SPOwner/Swift-Protocol.h>

@class NSData, NSDateInterval;

@protocol SPConnectionToken <Swift>

@property (copy, nonatomic, readonly) NSData *address;
@property (copy, nonatomic, readonly) NSData *connectionToken;
@property (copy, nonatomic, readonly) NSData *commandKey;
@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;

@end
