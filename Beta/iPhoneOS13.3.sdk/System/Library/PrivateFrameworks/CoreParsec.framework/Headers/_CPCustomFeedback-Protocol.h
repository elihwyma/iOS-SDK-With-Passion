/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData;

@protocol _CPCustomFeedback <Swift>

@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSData *jsonFeedback;
@property (nonatomic) int feedbackType;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
