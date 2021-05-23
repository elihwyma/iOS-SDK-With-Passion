/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, _CPCardSectionForFeedback, _CPPunchoutForFeedback, _CPSearchResultForFeedback;

@protocol _CPUserReportFeedback <Swift>

@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) _CPSearchResultForFeedback *result;
@property (retain, nonatomic) _CPPunchoutForFeedback *userSelection;
@property (retain, nonatomic) _CPCardSectionForFeedback *cardSection;
@property (copy, nonatomic) NSData *uuidBytes;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
