/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData;

@protocol _CPSpotlightUsagePropensity <Swift>

@property (nonatomic) float appLaunch;
@property (nonatomic) float onDeviceAddressBookData;
@property (nonatomic) float onDeviceOtherPersonalData;
@property (nonatomic) float punchout;
@property (nonatomic) float thirdPartyInAppContent;
@property (nonatomic) float parsec;
@property (nonatomic) float querySuggestion;
@property (nonatomic) float other;
@property (nonatomic) int totalEngagements;
@property (nonatomic) float siriSuggestions;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
