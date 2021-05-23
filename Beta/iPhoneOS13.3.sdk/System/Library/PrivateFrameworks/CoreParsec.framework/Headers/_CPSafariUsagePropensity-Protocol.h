/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData;

@protocol _CPSafariUsagePropensity <Swift>

@property (nonatomic) float localGoto;
@property (nonatomic) float localTap;
@property (nonatomic) float parsecGoto;
@property (nonatomic) float parsecTap;
@property (nonatomic) float thirdPartyGoto;
@property (nonatomic) float thirdPartyTap;
@property (nonatomic) float thirdPartyCompletionOrRecentSearch;
@property (nonatomic) float goToSite;
@property (nonatomic) float other;
@property (nonatomic) int totalEngagements;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
