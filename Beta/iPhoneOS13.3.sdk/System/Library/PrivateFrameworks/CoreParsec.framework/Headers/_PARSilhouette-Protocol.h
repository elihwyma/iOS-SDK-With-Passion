/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData;

@protocol _PARSilhouette <Swift>

@property (nonatomic) int portraitVersion;
@property (copy, nonatomic) NSArray *topics;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)clearTopics;
- (unsigned short)addTopics: /* Error: Ran out of types for this method. */;
- (unsigned short)topicsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)topicsCount;

@end
