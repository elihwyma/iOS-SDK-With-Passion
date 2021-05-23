/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, _CPDeviceContext;

@protocol _CPUsageSinceLookback <Swift>

@property (nonatomic) long long collectionStartTimestamp;
@property (nonatomic) long long collectionEndTimestamp;
@property (nonatomic) int client;
@property (nonatomic) int totalUsagesInCollectionPeriod;
@property (retain, nonatomic) _CPDeviceContext *context;
@property (nonatomic) int configuredLookbackTimeInDays;
@property (nonatomic) int activeDaysInCollectionPeriod;
@property (nonatomic) int totalEngagements;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
