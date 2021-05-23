/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString, _CPCardSectionForFeedback, _CPPunchoutForFeedback;

@protocol _CPCardSectionEngagementFeedback <Swift>

@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) _CPPunchoutForFeedback *destination;
@property (nonatomic) int triggerEvent;
@property (nonatomic) int actionCardType;
@property (retain, nonatomic) _CPCardSectionForFeedback *cardSection;
@property (nonatomic) _Bool destinationWasPARPunchout;
@property (copy, nonatomic) NSString *parPunchoutActionTarget;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultId;
@property (nonatomic) int actionTarget;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
