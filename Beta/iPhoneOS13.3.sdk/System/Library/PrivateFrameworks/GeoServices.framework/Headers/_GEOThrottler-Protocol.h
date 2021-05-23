/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSString;

@protocol _GEOThrottler <Swift>

@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) double timeWindow;

+ (unsigned short)stateIsExpired: /* Error: Ran out of types for this method. */;

- (unsigned short)isExpired;
- (unsigned short)remainingEntries;
- (unsigned short)maxReqCount;
- (unsigned short)timeUntilReset;
- (unsigned short)userInfoForError;
- (unsigned short)addRequestTimestamp;
- (unsigned short)captureState;
- (unsigned short)initWithKeyPath:requestCount:interval:savedState: /* Error: Ran out of types for this method. */;

@end
