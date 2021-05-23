/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString;

@protocol _CPCBAEngagementFeedback <Swift>

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic) int cbaType;
@property (copy, nonatomic) NSString *url;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
