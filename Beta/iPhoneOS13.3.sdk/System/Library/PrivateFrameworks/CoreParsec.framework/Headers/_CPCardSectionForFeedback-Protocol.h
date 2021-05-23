/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString;

@protocol _CPCardSectionForFeedback <Swift>

@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *actionTarget;
@property (copy, nonatomic) NSString *actionDestination;
@property (copy, nonatomic) NSString *resultId;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
