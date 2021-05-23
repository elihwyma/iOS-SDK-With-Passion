/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, _CPDeviceContext, _CPImagesUsagePropensity, _CPNewsUsagePropensity, _CPSafariUsagePropensity, _CPSpotlightUsagePropensity, _CPUsageSinceLookback;

@protocol _CPUsageEnvelope <Swift>

@property (retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback;
@property (retain, nonatomic) _CPSafariUsagePropensity *safariUsagePropensity;
@property (retain, nonatomic) _CPSpotlightUsagePropensity *spotlightUsagePropensity;
@property (retain, nonatomic) _CPImagesUsagePropensity *imagesUsagePropensity;
@property (retain, nonatomic) _CPNewsUsagePropensity *newsUsagePropensity;
@property (nonatomic) long long collectionStartTimestamp;
@property (nonatomic) long long collectionEndTimestamp;
@property (nonatomic) int configuredLookbackTimeInDays;
@property (nonatomic) int totalSessions;
@property (retain, nonatomic) _CPDeviceContext *context;
@property (copy, nonatomic) NSData *uuidBytes;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichKind;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
