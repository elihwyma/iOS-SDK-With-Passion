/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSString, NSUUID;

@protocol TUTelephonySubscription <Swift>

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSString *labelID;

- (unsigned short)initWithUUID: /* Error: Ran out of types for this method. */;

@end
