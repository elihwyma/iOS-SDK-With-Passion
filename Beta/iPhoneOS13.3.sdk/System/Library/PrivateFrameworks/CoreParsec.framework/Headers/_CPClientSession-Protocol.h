/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPUsageEnvelope, _CPUsageSinceLookback;

@protocol _CPClientSession <Swift>

@property (copy, nonatomic) NSString *agent;
@property (copy, nonatomic) NSString *userGuidString;
@property (copy, nonatomic) NSDictionary *resourceVersions;
@property (nonatomic) double sessionStart;
@property (nonatomic) int previousSessionEndReason;
@property (nonatomic) _Bool removeTimestamps;
@property (copy, nonatomic) NSString *parsecDeveloperID;
@property (nonatomic) _Bool duEnabled;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *locale;
@property (retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback;
@property (retain, nonatomic) _CPUsageEnvelope *cohortsFeedback;
@property (copy, nonatomic) NSData *jsonFeedback;
@property (copy, nonatomic) NSArray *feedbacks;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)feedbackAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addFeedback: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)setResourceVersions:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)getResourceVersions:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)clearFeedback;
- (unsigned short)feedbackCount;

@end
