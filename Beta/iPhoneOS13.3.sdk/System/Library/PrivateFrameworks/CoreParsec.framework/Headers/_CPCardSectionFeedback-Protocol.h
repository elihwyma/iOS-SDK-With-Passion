/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString, _CPCardSectionForFeedback;

@protocol _CPCardSectionFeedback <Swift>

@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) _CPCardSectionForFeedback *cardSection;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultId;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
