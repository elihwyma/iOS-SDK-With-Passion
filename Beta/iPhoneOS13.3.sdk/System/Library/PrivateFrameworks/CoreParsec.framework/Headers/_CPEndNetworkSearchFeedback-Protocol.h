/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString, _CPNetworkTimingData;

@protocol _CPEndNetworkSearchFeedback <Swift>

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long responseSize;
@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *parsecStatus;
@property (copy, nonatomic) NSString *fbq;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *partialClientIp;
@property (retain, nonatomic) _CPNetworkTimingData *timingData;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
