/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol _INPBConfidenceScoreComponent <Swift>

@property (nonatomic) float score;
@property (nonatomic) _Bool hasScore;
@property (copy, nonatomic) NSString *source;
@property (nonatomic, readonly) _Bool hasSource;

@end
